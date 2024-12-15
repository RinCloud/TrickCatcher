#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
    int H, W;
    cin >> H >> W;

    int C_h, C_w, D_h, D_w;
    cin >> C_h >> C_w >> D_h >> D_w;

    vector<string> S(H);
    for(int i=0; i<H; i++) {
        cin >> S[i];
    }

    vector<vector<int>> distance(H, vector<int>(W, -1));
    distance[C_h-1][C_w-1] = 0;

    queue<pair<int,int>> Q;
    Q.push(make_pair(C_h-1, C_w-1));

    while(!Q.empty()) {
        int y = Q.front().first;
        int x = Q.front().second;
        Q.pop();

        for(int dy=-1; dy<=1; dy++) {
            for(int dx=-1; dx<=1; dx++) {
                if(dy != 0 && dx != 0) continue;

                int ny = y + dy;
                int nx = x + dx;

                if(ny < 0 || ny >= H || nx < 0 || nx >= W) continue;
                if(S[ny][nx] == '#') continue;

                if(distance[ny][nx] == -1) {
                    distance[ny][nx] = distance[y][x];
                    Q.push(make_pair(ny, nx));
                }
            }
        }

        for(int dy=-2; dy<=2; dy++) {
            for(int dx=-2; dx<=2; dx++) {
                int ny = y + dy;
                int nx = x + dx;

                if(ny < 0 || ny >= H || nx < 0 || nx >= W) continue;
                if(S[ny][nx] == '#') continue;

                if(distance[ny][nx] == -1) {
                    distance[ny][nx] = distance[y][x] + 1;
                    Q.push(make_pair(ny, nx));
                }
            }
        }
    }

    cout << distance[D_h-1][D_w-1] << endl;

    return 0;
}