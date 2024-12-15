#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }

    int ans = 0;
    int remaining_time = k;
    int i = 0, j = 0;

    while (i < n && remaining_time >= a[i]) {
        remaining_time -= a[i];
        ans++;
        i++;
    }

    while (j < m && i >= 0) {
        remaining_time -= b[j];
        j++;
        while (i > 0 && remaining_time < 0) {
            remaining_time += a[i - 1];
            i--;
        }
        if (remaining_time >= 0) {
            ans = max(ans, i + j);
        }
    }

    cout << ans << endl;

    return 0;
}