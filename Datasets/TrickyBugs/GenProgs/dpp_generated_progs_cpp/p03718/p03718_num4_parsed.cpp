#include <iostream>
#include <vector>

using namespace std;

int main() {
    int H, W;
    cin >> H >> W;

    vector<vector<char>> pond(H, vector<char>(W));
    int num_leaves = 0;
    int start_row, start_col, target_row, target_col;

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            cin >> pond[i][j];
            
            if (pond[i][j] == '.') {
                num_leaves++;
            } else if (pond[i][j] == 'S') {
                start_row = i;
                start_col = j;
                num_leaves++;
            } else if (pond[i][j] == 'T') {
                target_row = i;
                target_col = j;
                num_leaves++;
            }
        }
    }

    // Check if start and target leaves are in the same row or column
    if ((start_row == target_row) || (start_col == target_col)) {
        cout << -1 << endl;
        return 0;
    }

    // Check if there are no other leaves in the same row or column as target leaf
    for (int i = 0; i < H; i++) {
        if (i != start_row && pond[i][target_col] == 'o') {
            cout << 0 << endl;
            return 0;
        }
    }

    for (int j = 0; j < W; j++) {
        if (j != start_col && pond[target_row][j] == 'o') {
            cout << 0 << endl;
            return 0;
        }
    }

    cout << num_leaves - 2 << endl;

    return 0;
}