#include <iostream>
#include <vector>
#include <algorithm>

#define MOD 1000000007

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    vector<long long> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    long long ans = 1;
    int max_num_bit = 0;

    for (int i = 0; i < N; i++) {
        max_num_bit = max(max_num_bit, 64 - __builtin_clzll(A[i]));

        ans = (ans * A[i]) % MOD;
    }

    for (int i = max_num_bit; i >= 0; i--) {
        if ((K >> i) & 1) {
            long long new_ans = 0;

            for (int j = 0; j < N; j++) {
                if ((A[j] >> i) & 1) {
                    new_ans += ((A[j] >> i) * (1LL << i)) % MOD;
                } else {
                    new_ans += (((A[j] >> i) - 1) * (1LL << i)) % MOD;
                }

                new_ans %= MOD;
            }

            ans = (ans + new_ans) % MOD;
        }
    }

    cout << ans << endl;

    return 0;
}