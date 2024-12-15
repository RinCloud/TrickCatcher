#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Read input
    int H, W, K;
    cin >> H >> W >> K;
    vector<vector<int>> S(H, vector<int>(W));
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            char c;
            cin >> c;
            S[i][j] = c - '0';
        }
    }
    
    // Count the number of cuts needed
    int numCuts = 0;
    for (int maskRow = 0; maskRow < (1 << H); maskRow++) {
        for (int maskCol = 0; maskCol < (1 << W); maskCol++) {
            int numBlocks = 0;
            for (int i = 0; i < H; i++) {
                for (int j = 0; j < W; j++) {
                    if (S[i][j] && !(maskRow & (1 << i)) && !(maskCol & (1 << j))) {
                        numBlocks++;
                    }
                }
            }
            if (numBlocks <= K) {
                numCuts++;
            }
        }
    }
    
    // Print the result
    cout << numCuts << endl;
    
    return 0;
}