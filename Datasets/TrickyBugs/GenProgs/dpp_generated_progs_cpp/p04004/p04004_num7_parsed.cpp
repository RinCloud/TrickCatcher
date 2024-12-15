#include <iostream>
using namespace std;
const int MOD = 1000000007;

int main() {
    int N, M, K;
    cin >> N >> M >> K;
    
    long long ans = 0;
    long long threeExp = 1;
    
    for (int i = 0; i < N + M + K; i++) {
        ans = (ans + threeExp) % MOD;
        threeExp = (3 * threeExp) % MOD;
    }
    
    cout << ans << endl;
    
    return 0;
}