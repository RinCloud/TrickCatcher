#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int H, W;
    cin >> H >> W;
    vector<string> grid(H);
    for (int i = 0; i < H; i++) {
        cin >> grid[i];
    }
    
    int maxLighted = 0;
    for (int i = 0; i < H; i++) {
        int cnt = 0;
        bool hasObstacle = false;
        for (int j = 0; j < W; j++) {
            if (grid[i][j] == '#') {
                hasObstacle = true;
                maxLighted = max(maxLighted, cnt);
                cnt = 0;
            } else {
                cnt++;
            }
        }
        if (!hasObstacle) {
            maxLighted = max(maxLighted, cnt);
        }
    }
    
    for (int j = 0; j < W; j++) {
        int cnt = 0;
        bool hasObstacle = false;
        for (int i = 0; i < H; i++) {
            if (grid[i][j] == '#') {
                hasObstacle = true;
                maxLighted = max(maxLighted, cnt);
                cnt = 0;
            } else {
                cnt++;
            }
        }
        if (!hasObstacle) {
            maxLighted = max(maxLighted, cnt);
        }
    }
    
    cout << maxLighted << endl;
    
    return 0;
}