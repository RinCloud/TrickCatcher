#include <iostream>
#include <vector>
#include <algorithm>

#define MOD 1000000007

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    
    sort(A.begin(), A.end());
    
    long long maxProduct = 1;
    
    if (A[N-1] <= 0 && K % 2 != 0) {
        for (int i = N - 1; i >= N - K; i--) {
            maxProduct = (maxProduct * A[i]) % MOD;
        }
    } else {
        int left = 0;
        int right = N - 1;
        
        if (K % 2 != 0) {
            maxProduct = A[right];
            right--;
            K--;
        }
        
        while (K > 0) {
            long long product1 = (long long) A[left] * A[left + 1];
            long long product2 = (long long) A[right] * A[right - 1];
            
            if (product1 > product2) {
                maxProduct = (maxProduct * (product1 % MOD)) % MOD;
                left += 2;
            } else {
                maxProduct = (maxProduct * (product2 % MOD)) % MOD;
                right -= 2;
            }
            
            K -= 2;
        }
    }
    
    cout << maxProduct << endl;

    return 0;
}