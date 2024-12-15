#include <iostream>
#include <vector>

using namespace std;

int main() {
    int H, W, N;
    cin >> H >> W >> N;

    vector<pair<int, int>> paintedCells(N);
    for (int i = 0; i < N; i++) {
        cin >> paintedCells[i].first >> paintedCells[i].second;
    }

    vector<vector<int>> grid(H, vector<int>(W, 0));
    for (int i = 0; i < N; i++) {
        int x = paintedCells[i].first - 1;
        int y = paintedCells[i].second - 1;
        grid[x][y] = 1;
    }

    vector<vector<int>> count(10, vector<int>(10, 0));
    for (int i = 0; i <= H - 3; i++) {
        for (int j = 0; j <= W - 3; j++) {
            int blackCells = 0;
            for (int x = i; x < i + 3; x++) {
                for (int y = j; y < j + 3; y++) {
                    if (grid[x][y] == 1) {
                        blackCells++;
                    }
                }
            }
            count[blackCells][blackCells]++;
        }
    }

    for (int i = 0; i < 10; i++) {
        int total = 0;
        for (int j = 0; j < 10; j++) {
            total += count[j][i];
        }
        cout << total << endl;
    }

    return 0;
}