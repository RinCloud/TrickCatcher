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

    // sort the katana by their damage
    sort(b.rbegin(), b.rend());

    int ans = 0;
    for (int i = 0; i < N; i++) {
        if (b[i] > *max_element(a.begin(), a.end())) {
            H -= b[i];
            ans++;
        }

        if (H <= 0) {
            cout << ans << endl;
            return 0;
        }
    }

    ans += (H + *max_element(a.begin(), a.end()) - 1) / *max_element(a.begin(), a.end());
    cout << ans << endl;

    return 0;
}