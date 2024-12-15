#include <iostream>
#include <vector>
using namespace std;

const int MOD = 1000000007;

int main() {
    int N;
    cin >> N;

    vector<int> h(N);
    for (int i = 0; i < N; i++) {
        cin >> h[i];
    }

    long long ans = 1;
    for (int i = 0; i < N; i++) {
        if (i == 0) {
            ans *= h[i] + 1;
        } else if (i == N - 1) {
            ans *= h[i - 1] + 1;
        } else {
            ans *= min(h[i - 1], h[i]) + 1;
        }
        ans %= MOD;
    }

    cout << ans << endl;

    return 0;
}