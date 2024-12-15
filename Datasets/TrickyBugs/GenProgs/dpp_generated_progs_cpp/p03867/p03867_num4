#include <iostream>
#define MOD 1000000007

using namespace std;

long long powerMod(long long a, long long b) {
    long long result = 1;
    while (b > 0) {
        if (b & 1)
            result = (result * a) % MOD;
        a = (a * a) % MOD;
        b >>= 1;
    }
    return result;
}

long long calculateSequences(int N, int K) {
    if (N == 1)
        return K;
    if (N == 2)
        return K * (K + 1) / 2 % MOD;

    long long result = powerMod(K, (N + 1) / 2) % MOD;
    result = result * powerMod(K - 1, (N / 2) % (MOD - 1)) % MOD;
    return result;
}

int main() {
    int N, K;
    cin >> N >> K;
    
    long long result = calculateSequences(N, K);
    cout << result << endl;

    return 0;
}