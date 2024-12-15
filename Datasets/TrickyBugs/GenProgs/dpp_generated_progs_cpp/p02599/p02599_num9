#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main() {
    int N, Q;
    cin >> N >> Q;
    vector<int> colors(N);
    for (int i = 0; i < N; i++) {
        cin >> colors[i];
    }
    
    vector<unordered_set<int>> distinctColors(N + 1);
    for (int i = 0; i < N; i++) {
        distinctColors[i + 1] = distinctColors[i];
        distinctColors[i + 1].insert(colors[i]);
    }
    
    for (int i = 0; i < Q; i++) {
        int l, r;
        cin >> l >> r;
        int distinct = distinctColors[r].size() - distinctColors[l - 1].size();
        cout << distinct << endl;
    }
    
    return 0;
}