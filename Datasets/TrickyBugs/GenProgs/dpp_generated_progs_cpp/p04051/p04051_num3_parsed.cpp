#include <iostream>
#include <vector>
#define MOD 1000000007
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(N), B(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i] >> B[i];
    }

    vector<long long> countA(4001, 0), countB(4001, 0);
    for (int i = 0; i < N; i++) {
        countA[A[i]]++;
        countB[B[i]]++;
    }

    long long ans = 0;
    for (int i = 0; i < N; i++) {
        countA[A[i]]--;
        countB[B[i]]--;

        long long temp = 1;
        for (int j = 1; j <= 4000; j++) {
            temp = temp * (countA[j] + countB[j]) % MOD;
        }
        ans = (ans + temp) % MOD;

        countA[A[i]]++;
        countB[B[i]]++;
    }

    ans = (ans - N + MOD) % MOD;
    cout << ans << endl;

    return 0;
}