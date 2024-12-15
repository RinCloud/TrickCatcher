#include<iostream>
#include<queue>
#include<vector>
using namespace std;

int main(){
    int H, W;
    cin >> H >> W;

    vector<vector<char>> grid(H, vector<char>(W));
    for(int i=0; i<H; i++){
        for(int j=0; j<W; j++){
            cin >> grid[i][j];
        }
    }

    vector<vector<bool>> visited(H, vector<bool>(W, false));

    int dx[4] = {-1, 0, 1, 0};
    int dy[4] = {0, 1, 0, -1};

    queue<pair<int, int>> q;

    for(int i=0; i<H; i++){
        for(int j=0; j<W; j++){
            if(grid[i][j] == '#'){
                q.push({i, j});
                visited[i][j] = true;
            }
        }
    }

    int operations = 0;

    while(!q.empty()){
        int currSize = q.size();

        while(currSize--){
            int x = q.front().first;
            int y = q.front().second;
            q.pop();

            for(int i=0; i<4; i++){
                int nx = x + dx[i];
                int ny = y + dy[i];

                if(nx >= 0 && nx < H && ny >= 0 && ny < W){
                    if(!visited[nx][ny] && grid[nx][ny] == '.'){
                        q.push({nx, ny});
                        visited[nx][ny] = true;
                        grid[nx][ny] = '#';
                    }
                }
            }
        }

        if(!q.empty()){
            operations++;
        }
    }

    cout << operations << endl;

    return 0;
}