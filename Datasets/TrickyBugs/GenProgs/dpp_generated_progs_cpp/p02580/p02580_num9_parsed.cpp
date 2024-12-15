#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main() {
    int H, W, M;
    cin >> H >> W >> M;
    
    vector<int> row_count(H, 0);
    vector<int> col_count(W, 0);
    unordered_map<int, int> targets;
    
    for (int i = 0; i < M; i++) {
        int h, w;
        cin >> h >> w;
        h--;
        w--;
        row_count[h]++;
        col_count[w]++;
        targets[h * W + w]++;
    }
    
    int max_row_count = *max_element(row_count.begin(), row_count.end());
    int max_col_count = *max_element(col_count.begin(), col_count.end());
    
    int max_targets = max_row_count + max_col_count;
    
    vector<int> max_row_indices;
    vector<int> max_col_indices;
    
    for (int i = 0; i < H; i++) {
        if (row_count[i] == max_row_count) {
            max_row_indices.push_back(i);
        }
    }
    
    for (int i = 0; i < W; i++) {
        if (col_count[i] == max_col_count) {
            max_col_indices.push_back(i);
        }
    }
    
    for (int i = 0; i < max_row_indices.size(); i++) {
        for (int j = 0; j < max_col_indices.size(); j++) {
            if (targets.count(max_row_indices[i] * W + max_col_indices[j]) == 0) {
                cout << max_targets << endl;
                return 0;
            }
        }
    }
    
    cout << max_targets - 1 << endl;
    return 0;
}