#include<iostream>
#include<queue>
#include<vector>
using namespace std;

int main() {
    int H, W;
    cin >> H >> W;
    int C_h, C_w;
    int D_h, D_w;
    cin >> C_h >> C_w;
    cin >> D_h >> D_w;

    vector<vector<char>> maze(H+2, vector<char>(W+2));

    for(int i=1; i<=H; i++){
        for(int j=1; j<=W; j++){
            cin >> maze[i][j];
        }
    }

    for(int i=0; i<=H+1; i++){
        maze[i][0] = '#';
        maze[i][W+1] = '#';
    }

    for(int i=0; i<=W+1; i++){
        maze[0][i] = '#';
        maze[H+1][i] = '#';
    }

    vector<vector<int>> dist(H+2, vector<int>(W+2, -1));

    queue<pair<int, int>> que;
    que.push(make_pair(C_h, C_w));
    dist[C_h][C_w] = 0;

    int dx[4] = {0, -1, 0, 1};
    int dy[4] = {-1, 0, 1, 0};

    while(!que.empty()){
        int x = que.front().first;
        int y = que.front().second;
        que.pop();

        for(int dir=0; dir<4; dir++){
            int nx = x + dx[dir];
            int ny = y + dy[dir];

            if(nx<0 || nx>=H+2 || ny<0 || ny>=W+2) continue;
            if(maze[nx][ny] == '#') continue;
            if(dist[nx][ny] != -1) continue;

            dist[nx][ny] = dist[x][y];
            que.push(make_pair(nx, ny));
        }

        for(int i=-2; i<=2; i++){
            for(int j=-2; j<=2; j++){
                int nx = x + i;
                int ny = y + j;

                if(nx<0 || nx>=H+2 || ny<0 || ny>=W+2) continue;
                if(maze[nx][ny] == '#') continue;
                if(dist[nx][ny] != -1) continue;

                dist[nx][ny] = dist[x][y] + 1;
                que.push(make_pair(nx, ny));
            }
        }
    }

    if(dist[D_h][D_w] == -1){
        cout << -1 << endl;
    }else{
        cout << dist[D_h][D_w] << endl;
    }

    return 0;
}