#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int H, W;
    cin >> H >> W;
    vector<string> S(H);
    for (int i = 0; i < H; i++) {
        cin >> S[i];
    }
    
    vector<vector<int>> adj(H, vector<int>(W, 0));
    
    int dr[] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int dc[] = {-1, 0, 1, -1, 1, -1, 0, 1};
    
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            if (S[i][j] == '.') {
                for (int k = 0; k < 8; k++) {
                    int ni = i + dr[k];
                    int nj = j + dc[k];
                    
                    if (ni >= 0 && ni < H && nj >= 0 && nj < W && S[ni][nj] == '#') {
                        adj[i][j]++;
                    }
                }
            }
        }
    }
    
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            if (S[i][j] == '#') {
                cout << "#";
            } else {
                cout << adj[i][j];
            }
        }
        cout << endl;
    }
    
    return 0;
}