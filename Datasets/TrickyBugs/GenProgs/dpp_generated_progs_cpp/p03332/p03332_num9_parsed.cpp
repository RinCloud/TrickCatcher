#include <iostream>
#include <vector>

using namespace std;
const int MOD = 998244353;

int main() {
    int N, A, B;
    long long K;
    cin >> N >> A >> B >> K;

    vector<long long> fact(N+1, 1);
    vector<long long> inv_fact(N+1, 1);

    for (int i = 2; i <= N; i++) {
        fact[i] = (fact[i-1] * i) % MOD;
        inv_fact[i] = (MOD - MOD/i) * inv_fact[MOD%i] % MOD;
    }

    for (int i = 2; i <= N; i++) {
        inv_fact[i] = (inv_fact[i] * inv_fact[i-1]) % MOD;
    }

    long long ans = 0;
    for (int i = 0; i <= N; i++) {
        long long rem = K - (A * i);
        if (rem < 0) break;
        if (rem % B) continue;

        long long j = rem / B;
        if (j > N) continue;

        long long res = (fact[N] * inv_fact[i]) % MOD;
        res = (res * inv_fact[j]) % MOD;
        res = (res * fact[N-i]) % MOD;
        res = (res * inv_fact[N-j]) % MOD;
        ans = (ans + res) % MOD;
    }

    cout << ans << endl;

    return 0;
}