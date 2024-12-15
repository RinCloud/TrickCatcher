#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int MOD = 1000000007;

int main() {
    int N, K;
    cin >> N >> K;
    
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    
    sort(A.begin(), A.end());
    
    long long result = 1;
    
    if (A[N-1] < 0 && K % 2 == 1) {
        for (int i = N-1; i >= N-K; i--) {
            result = (result * (A[i] % MOD + MOD)) % MOD;
        }
    } else {
        int left = 0;
        int right = N-1;
        
        if (K % 2 == 1) {
            result = (result * (A[right] % MOD + MOD)) % MOD;
            right--;
            K--;
        }
        
        while (K > 0) {
            long long productLeft = (A[left] * A[left+1]) % MOD;
            long long productRight = (A[right] * A[right-1]) % MOD;
            
            if (productLeft > productRight) {
                result = (result * (productLeft % MOD + MOD)) % MOD;
                left += 2;
            } else {
                result = (result * (productRight % MOD + MOD)) % MOD;
                right -= 2;
            }
            
            K -= 2;
        }
    }
    
    cout << result << endl;
    
    return 0;
}