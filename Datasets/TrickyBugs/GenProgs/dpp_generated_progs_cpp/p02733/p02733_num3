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
            cin >> S[i][j];
        }
    }
    
    // Count the number of cuts needed
    int cuts = 0;
    for (int mask = 0; mask < (1 << (H + W)); mask++) {
        int cnt = 0;
        for (int i = 0; i < H; i++) {
            for (int j = 0; j < W; j++) {
                if (((mask >> i) & 1) || ((mask >> (H + j)) & 1)) {
                    cnt += S[i][j];
                }
            }
        }
        if (cnt <= K) {
            cuts++;
        }
    }
    
    // Print the result
    cout << cuts << endl;
    
    return 0;
}