#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main() {
    int N, Q;
    cin >> N >> Q;
    
    vector<int> balls(N);
    for (int i = 0; i < N; i++) {
        cin >> balls[i];
    }
    
    vector<int> prefixCount(N + 1, 0);
    set<int> colors;
    
    for (int i = 0; i < N; i++) {
        colors.insert(balls[i]);
        prefixCount[i + 1] = colors.size();
    }
    
    for (int i = 0; i < Q; i++) {
        int l, r;
        cin >> l >> r;
        
        int distinctColors = prefixCount[r] - prefixCount[l - 1];
        cout << distinctColors << endl;
    }
    
    return 0;
}