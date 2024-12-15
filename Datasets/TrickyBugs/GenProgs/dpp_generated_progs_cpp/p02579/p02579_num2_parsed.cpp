#include <iostream>
#include <queue>
#include <vector>
using namespace std;

struct pos {
    int h;
    int w;
    int sum;
};

int main() {
    int H, W;
    cin >> H >> W;
    int C_h, C_w;
    cin >> C_h >> C_w;
    int D_h, D_w;
    cin >> D_h >> D_w;

    vector< vector<char> > S(H+2, vector<char>(W+2, '#'));

    for (int i = 1; i <= H; i++) {
        string str;
        cin >> str;
        for (int j = 1; j <= W; j++) {
            S[i][j] = str[j - 1];
        }
    }

    queue<pos> q;
    q.push({C_h, C_w, 0});

    vector< vector<bool> > visited(H+2, vector<bool>(W+2, false));

    while (!q.empty()) {
        pos cur = q.front();
        q.pop();

        if (cur.h == D_h && cur.w == D_w) {
            cout << cur.sum << endl;
            return 0;
        }

        if (visited[cur.h][cur.w]) continue;
        visited[cur.h][cur.w] = true;

        for (int i = -2; i <= 2; i++) {
            for (int j = -2; j <= 2; j++) {
                int next_h = cur.h + i;
                int next_w = cur.w + j;

                if (next_h < 1 || next_h > H || next_w < 1 || next_w > W) continue;
                if (S[next_h][next_w] != '.') continue;

                if (i == 0 && j == 0) {
                    q.push({next_h, next_w, cur.sum});
                } else {
                    q.push({next_h, next_w, cur.sum + 1});
                }
            }
        }
    }

    cout << -1 << endl;

    return 0;
}