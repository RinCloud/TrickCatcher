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

    sort(a.rbegin(), a.rend());
    sort(b.rbegin(), b.rend());

    int ans = 0;
    for (int i = 0; i < N; i++) {
        if (b[i] > a[0]) {
            H -= b[i];
            ans++;
            if (H <= 0) {
                cout << ans << endl;
                return 0;
            }
        } else {
            break;
        }
    }

    ans += (H + a[0] - 1) / a[0];
    cout << ans << endl;

    return 0;
}