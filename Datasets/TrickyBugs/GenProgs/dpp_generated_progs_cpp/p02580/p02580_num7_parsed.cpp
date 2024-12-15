#include <iostream>
#include <vector>
using namespace std;

int main() {
    int H, W, M;
    cin >> H >> W >> M;

    vector<int> rows(H, 0);
    vector<int> cols(W, 0);
    vector<pair<int, int>> targets(M);

    for (int i = 0; i < M; i++) {
        int h, w;
        cin >> h >> w;
        h--;
        w--;
        targets[i] = make_pair(h, w);
        rows[h]++;
        cols[w]++;
    }

    int maxTargets = 0;
    vector<int> maxRows;
    vector<int> maxCols;

    for (int i = 0; i < H; i++) {
        if (rows[i] == 0)
            maxRows.push_back(i);
        else if (rows[i] > maxTargets) {
            maxTargets = rows[i];
            maxRows.clear();
            maxRows.push_back(i);
        } else if (rows[i] == maxTargets)
            maxRows.push_back(i);
    }

    for (int i = 0; i < W; i++) {
        if (cols[i] == 0)
            maxCols.push_back(i);
        else if (cols[i] > maxTargets) {
            maxTargets = cols[i];
            maxCols.clear();
            maxCols.push_back(i);
        } else if (cols[i] == maxTargets)
            maxCols.push_back(i);
    }

    for (int row : maxRows) {
        for (int col : maxCols) {
            if (find(targets.begin(), targets.end(), make_pair(row, col)) == targets.end()) {
                cout << maxTargets << endl;
                return 0;
            }
        }
    }

    cout << maxTargets - 1 << endl;
    return 0;
}