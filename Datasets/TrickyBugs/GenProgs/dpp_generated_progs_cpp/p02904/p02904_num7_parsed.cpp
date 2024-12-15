#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    vector<int> P(N);
    for (int i = 0; i < N; i++) {
        cin >> P[i];
    }

    int ans = 0;
    for (int i = 0; i <= N - K; i++) {
        vector<int> sortedP(P.begin() + i, P.begin() + i + K);
        sort(sortedP.begin(), sortedP.end());
        if (is_sorted(P.begin(), P.begin() + i) && is_sorted(P.begin() + i + K, P.end()) && P[i] == sortedP[0] && P[i + K - 1] == sortedP[K - 1]) {
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}