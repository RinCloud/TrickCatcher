#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, K, Q;
    cin >> N >> K >> Q;
    
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    
    int ans = INT_MAX;
    for (int i = 0; i < N; i++) {
        int smallest = A[i];
        int largest = A[i];
        for (int j = i+1; j < min(N, i+Q*K); j++) {
            smallest = min(smallest, A[j]);
            largest = max(largest, A[j]);
        }
        if (i+Q*K-1 < N) {
            ans = min(ans, largest - smallest);
        }
    }
    
    cout << ans << endl;
    
    return 0;
}