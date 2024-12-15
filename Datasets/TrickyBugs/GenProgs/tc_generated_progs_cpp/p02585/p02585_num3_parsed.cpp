#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, k;
    cin >> n >> k;

    vector<int> p(n);
    for (int i = 0; i < n; i++) {
        cin >> p[i];
        p[i]--;
    }

    vector<long long> c(n);
    for (int i = 0; i < n; i++) {
        cin >> c[i];
    }

    long long ans = -1e18;
    for (int i = 0; i < n; i++) {
        int cur = i;
        long long cycle_sum = 0;
        int cycle_len = 0;
        while (true) {
            cur = p[cur];
            cycle_sum += c[cur];
            cycle_len++;
            if (cur == i) {
                break;
            }
        }
        long long max_cycle_sum = cycle_sum;
        long long cycle_score = k / cycle_len * cycle_sum;
        if (cycle_sum > 0) {
            max_cycle_sum = max(max_cycle_sum, cycle_score);
        }
        ans = max(ans, max_cycle_sum);
        if (k > cycle_len) {
            for (int j = 0; j < cycle_len; j++) {
                cur = p[cur];
                cycle_sum += c[cur];
                max_cycle_sum = max(max_cycle_sum, cycle_sum);
                long long score = cycle_score + c[cur];
                if (score > 0) {
                    max_cycle_sum = max(max_cycle_sum, score);
                }
                ans = max(ans, max_cycle_sum);
            }
        }
    }

    cout << ans << "\n";
    return 0;
}
