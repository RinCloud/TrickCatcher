#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main() {
    int H, W, M;
    cin >> H >> W >> M;

    vector<int> row_count(H, 0);
    vector<int> col_count(W, 0);
    unordered_set<long long> targets;

    for (int i = 0; i < M; i++) {
        int h, w;
        cin >> h >> w;
        h--;
        w--;
        row_count[h]++;
        col_count[w]++;
        targets.insert((long long)h * W + w);
    }

    int max_row_count = 0;
    for (int i = 0; i < H; i++) {
        max_row_count = max(max_row_count, row_count[i]);
    }

    int max_col_count = 0;
    for (int i = 0; i < W; i++) {
        max_col_count = max(max_col_count, col_count[i]);
    }

    int max_targets = max_row_count + max_col_count;
    int num_max_row = 0;
    int num_max_col = 0;

    for (int i = 0; i < H; i++) {
        if (row_count[i] == max_row_count) {
            num_max_row++;
        }
    }

    for (int i = 0; i < W; i++) {
        if (col_count[i] == max_col_count) {
            num_max_col++;
        }
    }

    if (num_max_row * num_max_col > M) {
        cout << max_targets << endl;
    } else {
        cout << max_targets - 1 << endl;
    }

    return 0;
}