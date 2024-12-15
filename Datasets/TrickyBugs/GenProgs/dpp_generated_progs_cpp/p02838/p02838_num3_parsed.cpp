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

    long long result = 0;
    for (int i = 0; i < 60; i++) {
        long long count = 0;
        for (int j = 0; j < N; j++) {
            if ((A[j] >> i) & 1) {
                count++;
            }
        }
        result += (count * (N - count) % MOD) * (1LL << i) % MOD;
        result %= MOD;
    }

    cout << result << endl;

    return 0;
}