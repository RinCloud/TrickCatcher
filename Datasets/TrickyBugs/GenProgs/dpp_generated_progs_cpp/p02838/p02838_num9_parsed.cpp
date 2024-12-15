#include <iostream>
#include <vector>

#define MOD 1000000007
#define MAX_BITS 60

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<long long> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    long long ans = 0;
    for (int bit = 0; bit < MAX_BITS; bit++) {
        long long cnt = 0;
        for (int i = 0; i < N; i++) {
            if (A[i] & (1LL << bit)) {
                cnt++;
            }
        }
        ans += (cnt * (N - cnt) % MOD * (1LL << bit) % MOD);
        ans %= MOD;
    }

    cout << ans << endl;

    return 0;
}
