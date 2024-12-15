#include <iostream>
#include <vector>

using namespace std;

int main() {
    int W, H, N;
    cin >> W >> H >> N;

    vector<vector<bool>> painted(H, vector<bool>(W, false));

    for (int i = 0; i < N; i++) {
        int x, y, a;
        cin >> x >> y >> a;

        if (a == 1) {
            for (int j = 0; j < y; j++) {
                for (int k = 0; k < x; k++) {
                    painted[j][k] = true;
                }
            }
        } else if (a == 2) {
            for (int j = 0; j < y; j++) {
                for (int k = x; k < W; k++) {
                    painted[j][k] = true;
                }
            }
        } else if (a == 3) {
            for (int j = y; j < H; j++) {
                for (int k = 0; k < x; k++) {
                    painted[j][k] = true;
                }
            }
        } else if (a == 4) {
            for (int j = y; j < H; j++) {
                for (int k = x; k < W; k++) {
                    painted[j][k] = true;
                }
            }
        }
    }

    int white_area = 0;

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            if (!painted[i][j]) {
                white_area++;
            }
        }
    }

    cout << white_area << endl;

    return 0;
}