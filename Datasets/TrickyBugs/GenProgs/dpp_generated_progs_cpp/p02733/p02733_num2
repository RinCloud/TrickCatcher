#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Read inputs
    int H, W, K;
    cin >> H >> W >> K;

    // Read chocolate bar
    vector<vector<int>> chocolate(H, vector<int>(W));
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            char c;
            cin >> c;
            chocolate[i][j] = c - '0';
        }
    }

    // Count the number of cuts needed
    int cuts = 0;
    for (int rowCuts = 0; rowCuts < (1 << (H - 1)); rowCuts++) {
        for (int colCuts = 0; colCuts < (1 << (W - 1)); colCuts++) {
            // Copy the chocolate bar
            vector<vector<int>> temp = chocolate;

            // Perform row cuts
            for (int i = 0; i < H - 1; i++) {
                if (rowCuts & (1 << i)) {
                    for (int j = 0; j < W; j++) {
                        temp[i][j] += temp[i + 1][j];
                        temp[i + 1][j] = 0;
                    }
                }
            }

            // Perform column cuts
            for (int j = 0; j < W - 1; j++) {
                if (colCuts & (1 << j)) {
                    for (int i = 0; i < H; i++) {
                        temp[i][j] += temp[i][j + 1];
                        temp[i][j + 1] = 0;
                    }
                }
            }

            // Check if all blocks have K or less white squares
            bool valid = true;
            for (int i = 0; i < H; i++) {
                for (int j = 0; j < W; j++) {
                    if (temp[i][j] > K) {
                        valid = false;
                        break;
                    }
                }
                if (!valid) break;
            }

            // Update cuts if valid
            if (valid) {
                int numCuts = __builtin_popcount(rowCuts) + __builtin_popcount(colCuts);
                if (cuts == 0 || numCuts < cuts) {
                    cuts = numCuts;
                }
            }
        }
    }

    // Print the minimum number of cuts
    cout << cuts << endl;

    return 0;
}