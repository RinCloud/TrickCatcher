#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Read inputs
    int N, M, Q;
    cin >> N >> M >> Q;
    
    // Store the information about the trains
    vector<int> L(M), R(M);
    for (int i = 0; i < M; i++) {
        cin >> L[i] >> R[i];
    }
    
    // Process the queries
    for (int i = 0; i < Q; i++) {
        int p, q;
        cin >> p >> q;
        
        // Count the number of trains that run within the section
        int count = 0;
        for (int j = 0; j < M; j++) {
            if (L[j] >= p && R[j] <= q) {
                count++;
            }
        }
        
        // Print the result
        cout << count << endl;
    }
    
    return 0;
}