#include <iostream>
using namespace std;

const int MOD = 1000000007;

int main() {
    int N, K;
    cin >> N >> K;

    // For N=1, there are K possible sequences.
    if (N == 1) {
        cout << K << endl;
        return 0;
    }

    // For N=2, there are K*(K+1) possible sequences.
    if (N == 2) {
        cout << (K * (K + 1) % MOD) << endl;
        return 0;
    }

    // Calculate the number of possible sequences for N > 2.
    // The first element can have K choices.
    // The second element can have K choices.
    // The remaining elements should be the same as the reversed prefix of the sequence.
    // So, there are K * K choices for the remaining elements.
    // Hence, the total number of possible sequences is K * K * K^(N/2 - 1) % MOD.
    long long ans = K;
    ans = ans * K % MOD;
    for (int i = 0; i < (N / 2 - 1); i++) {
        ans = ans * K % MOD;
    }

    cout << ans << endl;

    return 0;
}