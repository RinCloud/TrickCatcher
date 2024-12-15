#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int MOD = 1e9+7;

int main() {
    int N, K;
    cin >> N >> K;
    
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    
    sort(A.begin(), A.end());
    
    long long prod = 1;
    
    if (A[N-1] < 0 && K % 2 == 1) {
        for (int i = N-1; i >= N-K; i--) {
            prod = (prod * A[i]) % MOD;
        }
    } else {
        int left = 0, right = N-1;
        if (K % 2 == 1) {
            prod = A[right] % MOD;
            right--;
            K--;
        }
        while (K > 0) {
            long long prod_left = (long long) A[left] * A[left+1];
            long long prod_right = (long long) A[right] * A[right-1];
            
            if (prod_left > prod_right) {
                prod = (prod * prod_left) % MOD;
                left += 2;
                K -= 2;
            } else {
                prod = (prod * A[right]) % MOD;
                right--;
                K--;
            }
        }
    }
    
    cout << (prod + MOD) % MOD << endl;
    
    return 0;
}