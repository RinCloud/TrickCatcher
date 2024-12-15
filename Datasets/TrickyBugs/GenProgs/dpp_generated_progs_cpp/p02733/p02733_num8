#include <iostream>
#include <vector>
using namespace std;

int main() {
    int H, W, K;
    cin >> H >> W >> K;

    vector<vector<int>> chocolate(H, vector<int>(W));
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            char c;
            cin >> c;
            chocolate[i][j] = c - '0';
        }
    }

    int ans = 0;
    for (int mask_row = 0; mask_row < (1 << H); mask_row++) {
        for (int mask_col = 0; mask_col < (1 << W); mask_col++) {
            int count = 0;
            for (int i = 0; i < H; i++) {
                for (int j = 0; j < W; j++) {
                    if ((mask_row & (1 << i)) || (mask_col & (1 << j))) {
                        count += chocolate[i][j];
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