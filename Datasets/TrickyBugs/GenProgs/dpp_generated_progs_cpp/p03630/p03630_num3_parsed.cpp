#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    int H, W;
    cin >> H >> W;
    vector<string> S(H);
    for (int i = 0; i < H; i++) {
        cin >> S[i];
    }

    vector<vector<int>> black_count(H+1, vector<int>(W+1, 0));
    for (int i = 1; i <= H; i++) {
        for (int j = 1; j <= W; j++) {
            black_count[i][j] = black_count[i-1][j] + black_count[i][j-1] - black_count[i-1][j-1];
            if (S[i-1][j-1] == '#') {
                black_count[i][j]++;
            }
        }
    }

    int max_area = 0;
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            for (int k = i+1; k <= H; k++) {
                for (int l = j+1; l <= W; l++) {
                    int area = (k-i) * (l-j);
                    int black_squares = black_count[k][l] - black_count[i][l] - black_count[k][j] + black_count[i][j];
                    if (black_squares == area) {
                        max_area = max(max_area, area);
                    }
                }
            }
        }
    }

    cout << max_area << endl;

    return 0;
}