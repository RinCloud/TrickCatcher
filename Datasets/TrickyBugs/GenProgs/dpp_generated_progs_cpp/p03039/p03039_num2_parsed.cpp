#include <iostream>
#define MOD 1000000007
using namespace std;

int main() {
    int N, M, K;
    cin >> N >> M >> K;
    
    long long ans = 0;
    for (int dx = 0; dx < N; dx++) {
        for (int dy = 0; dy < M; dy++) {
            long long cnt = (1LL * (N - dx) * (M - dy) % MOD) * (N * M - 1) % MOD;
            cnt = cnt * (N * M - 2) % MOD;
            cnt = cnt * (N * M - K + 1) % MOD;
            cnt = cnt * 500000004 % MOD;
            ans = (ans + cnt) % MOD;
        }
    }
    
    cout << ans << endl;
    
    return 0;
}