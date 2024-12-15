#include <iostream>
#include <vector>

using namespace std;

int main() {
    int H, W, N;
    cin >> H >> W >> N;

    vector<vector<int>> grid(H, vector<int>(W, 0));

    for (int i = 0; i < N; i++) {
        int row, col;
        cin >> row >> col;
        grid[row - 1][col - 1] = 1;
    }

    vector<int> count(10, 0);

    for (int r = 0; r < H - 2; r++) {
        for (int c = 0; c < W - 2; c++) {
            int blackCount = 0;
            for (int i = r; i < r + 3; i++) {
                for (int j = c; j < c + 3; j++) {
                    if (grid[i][j] == 1) {
                        blackCount++;
                    }
                }
            }
            count[blackCount]++;
        }
    }

    for (int i = 0; i < 10; i++) {
        cout << count[i] << endl;
    }

    return 0;
}