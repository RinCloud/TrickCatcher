#include <iostream>

using namespace std;
const int MOD = 1000000007;

int main() {
    int N, K;
    cin >> N >> K;

    long long ans = 1;
    if(N > 1) {
        if(K == 1) {
            ans = 0;
        } else if(K == 2) {
            ans = 2;
        } else {
            ans = 2 * K % MOD * (K - 1) % MOD;
        }
    }
    cout << ans << endl;

    return 0;
}