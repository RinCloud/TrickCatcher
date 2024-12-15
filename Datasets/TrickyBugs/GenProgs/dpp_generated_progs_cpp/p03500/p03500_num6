#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int MOD = 1000000007;

int main() {
    int N, K;
    cin >> N >> K;

    vector<long long> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    sort(A.begin(), A.end());

    long long ans = 1;
    int l = 0, r = 0;
    while (r < N) {
        while (l < r && A[r] - A[l] > K) {
            l++;
        }
        ans = (ans * (r - l + 1)) % MOD;
        r++;
    }

    cout << ans << endl;

    return 0;
}