#include <iostream>
#include <vector>

using namespace std;

const int MOD = 1000000007;

int main() {
    int N;
    cin >> N;

    vector<long long> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    long long ans = 0;
    for (int k = 0; k < 60; k++) {
        long long cntOnes = 0;
        for (int i = 0; i < N; i++) {
            if (A[i] >> k & 1) {
                cntOnes++;
            }
        }
        ans = (ans + cntOnes * (N - cntOnes) % MOD) % MOD;
    }

    cout << ans << endl;

    return 0;
}