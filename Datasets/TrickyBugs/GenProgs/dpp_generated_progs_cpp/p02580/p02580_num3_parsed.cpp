#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

int main() {
    int H, W, M;
    cin >> H >> W >> M;

    vector<int> row_count(H, 0);
    vector<int> col_count(W, 0);
    set<pair<int, int>> targets;

    for (int i = 0; i < M; i++) {
        int h, w;
        cin >> h >> w;
        h--;
        w--;
        row_count[h]++;
        col_count[w]++;
        targets.insert(make_pair(h, w));
    }

    int max_target = *max_element(row_count.begin(), row_count.end());

    for (int i = 0; i < H; i++) {
        if (row_count[i] == max_target) {
            for (int j = 0; j < W; j++) {
                if (col_count[j] == max_target) {
                    if (targets.find(make_pair(i, j)) == targets.end()) {
                        cout << max_target << endl;
                        return 0;
                    }
                }
            }
        }
    }

    cout << max_target - 1 << endl;

    return 0;
}