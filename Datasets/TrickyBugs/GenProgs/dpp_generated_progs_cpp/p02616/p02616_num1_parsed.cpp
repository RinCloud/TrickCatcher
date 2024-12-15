#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const long long MOD = 1000000007;

int main() {
    int N, K;
    cin >> N >> K;
    
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    
    sort(A.begin(), A.end());
    
    long long product = 1;
    
    if (A[N - 1] >= 0 || K % 2 == 0) {
        for (int i = N - 1; i >= N - K; i--) {
            product = (product * A[i]) % MOD;
        }
    } else {
        for (int i = 0; i < K; i++) {
            product = (product * A[i]) % MOD;
        }
    }
    
    if (product < 0) {
        product += MOD;
    }
    
    cout << product << endl;
    
    return 0;
}