#include <iostream>
#include <vector>
using namespace std;

const int MOD = 1000000007;

int main() {
    int N;
    cin >> N;

    vector<int> A(N), B(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i] >> B[i];
    }

    vector<long long> pow2(N + 1, 1);
    for (int i = 1; i <= N; i++) {
        pow2[i] = pow2[i - 1] * 2 % MOD;
    }

    long long ans = pow2[N] - 1;
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            int cntA = A[i] + A[j];
            int cntB = B[i] + B[j];
            long long ways = pow2[N - 2];
            ways = (ways - pow2[N - cntA - cntB] + MOD) % MOD;
            ans = (ans + ways) % MOD;
        }
    }

    cout << ans << endl;

    return 0;
}