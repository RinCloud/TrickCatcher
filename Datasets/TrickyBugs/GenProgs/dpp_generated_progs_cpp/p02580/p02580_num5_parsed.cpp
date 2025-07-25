#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main() {
    int H, W, M;
    cin >> H >> W >> M;
    
    vector<int> row_count(H, 0);
    vector<int> col_count(W, 0);
    unordered_set<int> targets;
    
    for (int i = 0; i < M; i++) {
        int h, w;
        cin >> h >> w;
        row_count[h-1]++;
        col_count[w-1]++;
        targets.insert((h-1) * W + (w-1));
    }
    
    int max_target = 0;
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            int count = row_count[i] + col_count[j];
            if (targets.count(i * W + j)) {
                count--;
            }
            max_target = max(max_target, count);
        }
    }
    
    cout << max_target << endl;
    
    return 0;
}
