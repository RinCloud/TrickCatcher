#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    
    sort(A.begin(), A.end());
    
    vector<long long> prefixSum(N);
    prefixSum[0] = A[0];
    for (int i = 1; i < N; i++) {
        prefixSum[i] = prefixSum[i-1] + A[i];
    }
    
    long long maxHappiness = 0;
    for (int i = 0; i < N; i++) {
        long long happiness = 0;
        if (i > 0) {
            happiness += prefixSum[i-1];
        }
        happiness += (prefixSum[N-1] - prefixSum[i]) - (N-i-1) * (long long)A[i];
        
        maxHappiness = max(maxHappiness, happiness);
    }
    
    cout << maxHappiness << endl;
    
    return 0;
}