#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, M, Q;
    cin >> N >> M >> Q;
    
    vector<int> trains(N+1, 0);
    for (int i = 0; i < M; i++) {
        int L, R;
        cin >> L >> R;
        
        // Increase the count of trains running in the range [L, R]
        for (int j = L; j <= R; j++) {
            trains[j]++;
        }
    }
    
    for (int i = 0; i < Q; i++) {
        int p, q;
        cin >> p >> q;
        
        int count = 0;
        // Count the trains running strictly within the range [p, q]
        for (int j = p; j <= q; j++) {
            count += trains[j];
        }
        
        cout << count << endl;
    }
    
    return 0;
}