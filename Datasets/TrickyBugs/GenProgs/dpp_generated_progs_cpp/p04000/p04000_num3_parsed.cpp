#include <iostream>
#include <vector>

using namespace std;

int main() {
    int H, W, N;
    cin >> H >> W >> N;

    vector<vector<int>> grid(H, vector<int>(W, 0));

    for (int i = 0; i < N; i++) {
        int a, b;
        cin >> a >> b;
        grid[a - 1][b - 1] = 1;
    }

    vector<int> count(10, 0);

    for (int i = 0; i < H - 2; i++) {
        for (int j = 0; j < W - 2; j++) {
            int blacks = 0;
            for (int r = i; r < i + 3; r++) {
                for (int c = j; c < j + 3; c++) {
                    if (grid[r][c] == 1) {
                        blacks++;
                    }
                }
            }
            count[blacks]++;
        }
    }

    for (int i = 0; i <= 9; i++) {
        cout << count[i] << endl;
    }

    return 0;
}