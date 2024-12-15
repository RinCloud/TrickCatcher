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
    
    vector<int> prefixCount(N + 1, 0);
    
    unordered_set<int> currentColors;
    for (int i = 0; i < Q; i++) {
        int l, r;
        cin >> l >> r;
        
        currentColors.clear();
        for (int j = l - 1; j < r; j++) {
            currentColors.insert(colors[j]);
        }
        
        prefixCount[i + 1] = prefixCount[i] + currentColors.size();
    }
    
    for (int i = 1; i <= Q; i++) {
        cout << prefixCount[i] << endl;
    }
    
    return 0;
}