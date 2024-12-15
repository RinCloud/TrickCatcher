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
        targets.insert({h, w});
        row_count[h]++;
        col_count[w]++;
    }
    
    int max_row = *max_element(begin(row_count), end(row_count));
    int max_col = *max_element(begin(col_count), end(col_count));
    
    int max_targets = max_row + max_col;
    
    int count_max_row = count(begin(row_count), end(row_count), max_row);
    int count_max_col = count(begin(col_count), end(col_count), max_col);
    
    for (auto target : targets) {
        int h = target.first;
        int w = target.second;
        if (row_count[h] == max_row && col_count[w] == max_col) {
            if (count_max_row * count_max_col == 1) {
                cout << max_targets - 1 << endl;
            } else {
                cout << max_targets << endl;
            }
            return 0;
        }
    }
    
    cout << max_targets << endl;
    
    return 0;
}