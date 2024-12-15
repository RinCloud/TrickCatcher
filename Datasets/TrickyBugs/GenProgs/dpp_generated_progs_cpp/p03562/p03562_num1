#include <iostream>
#include <vector>
#include <bitset>

#define MOD 998244353

using namespace std;

int main() {
    int N;
    bitset<4000> X;
    vector<bitset<4000>> A;

    cin >> N >> X;
    A.resize(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    vector<bool> dp(X.to_ulong() + 1);
    dp[0] = true;
    vector<int> count(X.to_ulong() + 1, 0);
    count[0] = 1;

    for (int mask = 0; mask <= X.to_ulong(); mask++) {
        if (!dp[mask]) continue;
        for (int i = 0; i < N; i++) {
            int next_mask = (mask | A[i].to_ulong());
            int xor_mask = (mask ^ A[i].to_ulong());

            if (!dp[next_mask]) {
                dp[next_mask] = true;
                count[next_mask] = count[mask];
            } else {
                count[next_mask] = (count[next_mask] + count[mask]) % MOD;
            }

            if (!dp[xor_mask]) {
                dp[xor_mask] = true;
                count[xor_mask] = count[mask];
            } else {
                count[xor_mask] = (count[xor_mask] + count[mask]) % MOD;
            }
        }
    }

    int result = 0;
    for (int i = 0; i <= X.to_ulong(); i++) {
        if (dp[i]) {
            result = (result + count[i]) % MOD;
        }
    }

    cout << result << endl;

    return 0;
}