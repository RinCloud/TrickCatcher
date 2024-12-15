#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
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
        targets.insert({h, w});
        row_count[h]++;
        col_count[w]++;
    }
    
    int max_targets = 0;
    vector<int> max_rows, max_cols;
    
    for (int h = 0; h < H; h++) {
        if (row_count[h] > max_targets) {
            max_rows.clear();
            max_rows.push_back(h);
            max_targets = row_count[h];
        } else if (row_count[h] == max_targets) {
            max_rows.push_back(h);
        }
    }
    
    for (int w = 0; w < W; w++) {
        if (col_count[w] > max_targets) {
            max_cols.clear();
            max_cols.push_back(w);
            max_targets = col_count[w];
        } else if (col_count[w] == max_targets) {
            max_cols.push_back(w);
        }
    }
    
    int ans = max_targets;
    
    for (int h : max_rows) {
        for (int w : max_cols) {
            if (targets.count({h, w}) == 0) {
                cout << ans << endl;
                return 0;
            }
        }
    }
    
    cout << ans - 1 << endl;
    
    return 0;
}