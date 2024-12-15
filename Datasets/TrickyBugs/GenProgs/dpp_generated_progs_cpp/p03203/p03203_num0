#include <iostream>
#include <vector>
using namespace std;

int main() {
    int H, W, N;
    cin >> H >> W >> N;
    
    vector<vector<int>> obstacle(H+1, vector<int>(W+1, 0));
    for (int i = 0; i < N; i++) {
        int X, Y;
        cin >> X >> Y;
        obstacle[X][Y] = 1;
    }
    
    int actions = 0;
    int x = 1, y = 1;
    while (true) {
        if (x == H && y == W) break;
        
        // Check if next cell is valid
        if (x < H && !obstacle[x+1][y]) {  // Takahashi can move down
            x++;
        } else if (y < W && !obstacle[x][y+1]) {  // Aoki can move right
            y++;
        } else {
            break;  // Piece does not move twice in a row
        }
        actions++;
    }
    
    cout << actions << endl;
    
    return 0;
}