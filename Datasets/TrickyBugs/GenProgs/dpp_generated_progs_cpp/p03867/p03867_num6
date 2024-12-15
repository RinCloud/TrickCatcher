#include <iostream>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    
    int MOD = 1000000007;
    
    long long int ans = 1;
    
    if (N > 1) {
        if (K == 1) {
            ans = 0;
        } else if (N % 2 == 0) {
            ans = (1LL * K * K) % MOD;
        } else {
            ans = (1LL * K * (K - 1) % MOD);
        }
    } else {
        ans = K;
    }
    
    cout << ans << endl;
    
    return 0;
}