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

    sort(b.rbegin(), b.rend());

    int ans = 0;
    for (int i = 0; i < N; i++) {
        if (b[i] > *max_element(a.begin(), a.end())) {
            H -= b[i];
            ans++;
        } else {
            break;
        }
        if (H <= 0) {
            break;
        }
    }

    if (H > 0) {
        ans += (H + *max_element(a.begin(), a.end()) - 1) / (*max_element(a.begin(), a.end()));
    }
    
    cout << ans << endl;

    return 0;
}