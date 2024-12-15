#include <iostream>
#include <vector>

using namespace std;

const int MOD = 1000000007;

int main() {
    int N, K;
    cin >> N >> K;

    // Calculate the factorial
    vector<int> fact(N+2, 1);
    for (int i = 2; i <= N+1; i++) {
        fact[i] = (fact[i-1] * i) % MOD;
    }

    // Calculate the inverse factorial
    vector<int> invFact(N+2, 1);
    for (int i = 2; i <= N+1; i++) {
        invFact[i] = (MOD - (MOD / i) * invFact[MOD % i] % MOD) % MOD;
    }

    // Calculate the number of possible sums
    int answer = 0;
    for (int i = 0; i <= min(K, N); i++) {
        int coefficient = (fact[N+1] * invFact[i] % MOD) * invFact[N+1-i] % MOD;
        if (i <= N-K) {
            coefficient = (coefficient * fact[N-K+1] % MOD) * invFact[i] % MOD;
        }
        answer = (answer + coefficient) % MOD;
    }

    cout << answer << endl;

    return 0;
}