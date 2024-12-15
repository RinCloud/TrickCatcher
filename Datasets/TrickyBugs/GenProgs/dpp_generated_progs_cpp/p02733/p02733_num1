#include <iostream>
#include <vector>
using namespace std;

int main() {
    int H, W, K;
    cin >> H >> W >> K;
    
    vector<vector<int>> S(H, vector<int>(W));
    for (int i = 0; i < H; i++) {
        string row;
        cin >> row;
        for (int j = 0; j < W; j++) {
            S[i][j] = row[j] - '0';
        }
    }
    
    int ans = 0;
    for (int maskH = 0; maskH < (1 << H); maskH++) {
        for (int maskW = 0; maskW < (1 << W); maskW++) {
            int count = 0;
            for (int i = 0; i < H; i++) {
                for (int j = 0; j < W; j++) {
                    if ((maskH & (1 << i)) == 0 && (maskW & (1 << j)) == 0 && S[i][j] == 1) {
                        count++;
                    }
                }
            }
            if (count <= K) {
                ans++;
            }
        }
    }
    
    cout << ans << endl;
    
    return 0;
}