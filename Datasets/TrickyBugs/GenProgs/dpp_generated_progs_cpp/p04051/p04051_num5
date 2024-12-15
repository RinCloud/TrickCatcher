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

    vector<int> sumA(N), sumB(N);
    sumA[0] = A[0];
    sumB[0] = B[0];
    for (int i = 1; i < N; i++) {
        sumA[i] = (sumA[i-1] + A[i]) % MOD;
        sumB[i] = (sumB[i-1] + B[i]) % MOD;
    }

    long long ans = 0;
    for (int i = 0; i < N; i++) {
        long long cur = (sumA[i] + sumB[i]) % MOD;
        cur = (cur * ((sumA[N-1] + sumB[N-1] - sumA[i] - sumB[i] + MOD) % MOD)) % MOD;
        ans = (ans + cur) % MOD;
    }

    cout << ans << endl;

    return 0;
}