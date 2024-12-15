#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, H;
    cin >> N >> H;

    vector<int> a(N), b(N);
    for (int i = 0; i < N; i++) {
        cin >> a[i] >> b[i];
    }

    sort(a.begin(), a.end(), greater<int>());
    sort(b.begin(), b.end(), greater<int>());

    int max_a = a[0];
    int min_b = b[0];

    int ans = 0;
    for (int i = 0; i < N; i++) {
        if (H <= 0) break;

        if (b[i] > max_a) {
            H -= b[i];
            ans++;
        } else {
            ans += (H + max_a - 1) / max_a;
            break;
        }
    }

    cout << ans << endl;

    return 0;
}