#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main() {
    int H, W, M;
    cin >> H >> W >> M;
    
    vector<int> row_targets(H, 0);
    vector<int> col_targets(W, 0);
    set<pair<int, int>> targets;
    
    for (int i = 0; i < M; i++) {
        int h, w;
        cin >> h >> w;
        h--; w--;
        
        targets.insert(pair<int, int>(h, w));
        row_targets[h]++;
        col_targets[w]++;
    }
    
    int max_targets = 0;
    
    for (int h = 0; h < H; h++) {
        for (int w = 0; w < W; w++) {
            int total_targets = row_targets[h] + col_targets[w];
            if (targets.count(pair<int, int>(h, w)) == 0) {
                total_targets++;
            }
            max_targets = max(max_targets, total_targets);
        }
    }
    
    cout << max_targets << endl;
    
    return 0;
}
