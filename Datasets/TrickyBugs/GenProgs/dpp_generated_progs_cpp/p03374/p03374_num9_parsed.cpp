#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, C;
    cin >> N >> C;

    vector<int> x(N);
    vector<int> v(N);

    for (int i = 0; i < N; i++) {
        cin >> x[i] >> v[i];
    }

    vector<int> dp1(N);
    dp1[0] = v[0] - x[0];
    int max1 = dp1[0];

    for (int i = 1; i < N; i++) {
        dp1[i] = dp1[i-1] + v[i] - (x[i] - x[i-1]);
        max1 = max(max1, dp1[i]);
    }

    vector<int> dp2(N);
    dp2[N-1] = v[N-1] - (C - x[N-1]);
    int max2 = dp2[N-1];

    for (int i = N-2; i >= 0; i--) {
        dp2[i] = dp2[i+1] + v[i] - (x[i+1] - x[i]);
        max2 = max(max2, dp2[i]);
    }

    int ans = max(max1, max2);

    for (int i = 0; i < N-1; i++) {
        int tmp = dp1[i] + dp2[i+1] - x[i];
        ans = max(ans, tmp);
    }

    cout << ans << endl;

    return 0;
}