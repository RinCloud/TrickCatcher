#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int main() {
    int H, W, M;
    cin >> H >> W >> M;

    vector<int> row_targets(H, 0);
    vector<int> col_targets(W, 0);
    unordered_set<int> targets;

    for (int i = 0; i < M; i++) {
        int h, w;
        cin >> h >> w;
        h--;
        w--;

        targets.insert(h * W + w);
        row_targets[h]++;
        col_targets[w]++;
    }

    int max_row_targets = 0;
    int max_col_targets = 0;

    for (int i = 0; i < H; i++) {
        max_row_targets = max(max_row_targets, row_targets[i]);
    }

    for (int i = 0; i < W; i++) {
        max_col_targets = max(max_col_targets, col_targets[i]);
    }

    int max_targets = max_row_targets + max_col_targets;

    int num_max_rows = 0;
    int num_max_cols = 0;

    for (int i = 0; i < H; i++) {
        if (row_targets[i] == max_row_targets) {
            num_max_rows++;
        }
    }

    for (int i = 0; i < W; i++) {
        if (col_targets[i] == max_col_targets) {
            num_max_cols++;
        }
    }

    if (num_max_rows * num_max_cols > M) {
        max_targets--;
    }

    cout << max_targets << endl;

    return 0;
}