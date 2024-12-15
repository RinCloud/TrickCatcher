#include <iostream>
#include <vector>

using namespace std;

const long long MOD = 998244353;

long long power(long long base, long long expo) {
    long long result = 1;
    while (expo > 0) {
        if (expo % 2 == 1) {
            result = (result * base) % MOD;
        }
        base = (base * base) % MOD;
        expo /= 2;
    }
    return result;
}

long long inverse(long long num) {
    return power(num, MOD - 2);
}

long long nCr(int n, int r, vector<long long>& fact, vector<long long>& inv) {
    if (n < r) {
        return 0;
    }
    long long numerator = fact[n];
    long long denominator = (inv[r] * inv[n-r]) % MOD;
    return (numerator * denominator) % MOD;
}

int main() {
    int N, A, B;
    long long K;
    cin >> N >> A >> B >> K;

    vector<long long> fact(N+1, 1);
    vector<long long> inv(N+1, 1);

    for (int i = 2; i <= N; i++) {
        fact[i] = (fact[i-1] * i) % MOD;
        inv[i] = inverse(fact[i]);
    }

    long long ans = 0;

    for (int i = 0; i <= N; i++) {
        long long sum = K - (A * i);
        if (sum % B == 0) {
            long long j = sum / B;
            ans = (ans + nCr(N, i, fact, inv) * nCr(N, j, fact, inv)) % MOD;
        }
    }

    cout << ans << endl;

    return 0;
}