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
    
    vector<unordered_set<int>> uniqueColors(N);
    
    // Calculate the number of different colors for each ball position
    for (int i = 0; i < N; i++) {
        uniqueColors[i].insert(colors[i]);
        if (i > 0) {
            uniqueColors[i] = uniqueColors[i - 1];
            uniqueColors[i].insert(colors[i]);
        }
    }
    
    // Process the queries
    for (int i = 0; i < Q; i++) {
        int l, r;
        cin >> l >> r;
        
        if (l == 1) {
            cout << uniqueColors[r - 1].size() << endl;
        } else {
            cout << (uniqueColors[r - 1].size() - uniqueColors[l - 2].size()) << endl;
        }
    }
    
    return 0;
}