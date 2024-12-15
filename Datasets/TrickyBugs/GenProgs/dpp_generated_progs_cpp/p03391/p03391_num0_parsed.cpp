#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<long long> A(N);
    vector<long long> B(N);
    
    for(int i=0; i<N; i++) {
        cin >> A[i] >> B[i];
    }
    
    long long ans = 0;
    
    for(int i=0; i<N; i++) {
        // Determine the minimum of A[i] and B[i]
        long long minimum = min(A[i], B[i]);
        
        // Subtract the minimum from both A[i] and B[i]
        A[i] -= minimum;
        B[i] -= minimum;
        
        // Add the minimum to the answer
        ans += minimum;
        
        // If either A[i] or B[i] is still non-zero, then update the answer accordingly
        if(A[i] != 0) {
            ans += min(A[i], B[i+1]);
            B[i+1] -= min(A[i], B[i+1]);
        } else if(B[i] != 0) {
            ans += min(A[i+1], B[i]);
            A[i+1] -= min(A[i+1], B[i]);
        }
    }
    
    cout << ans << endl;
    
    return 0;
}