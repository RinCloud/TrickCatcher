#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    
    vector<int> p(N+1); // Since indexing starts from 1
    for (int i = 1; i <= N; i++) {
        cin >> p[i];
    }
    
    vector<int> fixed(N+1, 0); // Keeps track of the number of fixed elements
    
    for (int j = 1; j <= M; j++) {
        int x, y;
        cin >> x >> y;
        
        // If p[x] is already fixed, increase the fixed count
        if (fixed[p[x]] == 0) {
            fixed[p[x]]++;
        }
        
        // If p[y] is already fixed, increase the fixed count
        if (fixed[p[y]] == 0) {
            fixed[p[y]]++;
        }
        
        // Swap the values of p[x] and p[y]
        swap(p[x], p[y]);
    }
    
    int count = 0; // Count of p[i] = i after operations
    
    for (int i = 1; i <= N; i++) {
        // If p[i] is fixed or p[i] = i, increase the count
        if (fixed[i] > 0 || p[i] == i) {
            count++;
        }
    }
    
    cout << count << endl;

    return 0;
}