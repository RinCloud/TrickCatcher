#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    
    vector<vector<bool>> grid(K, vector<bool>(K));
    
    for (int i = 0; i < N; i++) {
        int x, y;
        char c;
        cin >> x >> y >> c;
        
        // Check if the desired square is within the range of the grid
        if (x % (2 * K) >= K && y % (2 * K) >= K) {
            if (c == 'B') {
                grid[x % K][y % K] = true;
            } else if (c == 'W') {
                grid[x % K][y % K] = false;
            }
        } else if (x % (2 * K) < K && y % (2 * K) < K) {
            if (c == 'B') {
                grid[x % K][y % K] = false;
            } else if (c == 'W') {
                grid[x % K][y % K] = true;
            }
        }
    }
    
    // Count the number of desires that can be satisfied
    int count = 0;
    for (int i = 0; i < K; i++) {
        for (int j = 0; j < K; j++) {
            if (grid[i][j]) {
                count++;
            }
        }
    }
    
    cout << count << endl;
    
    return 0;
}