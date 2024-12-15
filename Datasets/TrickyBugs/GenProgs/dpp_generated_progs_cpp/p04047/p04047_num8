#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> L(2 * N);
    for (int i = 0; i < 2 * N; i++) {
        cin >> L[i];
    }

    sort(L.begin(), L.end());

    int ans = 0;
    for (int i = 0; i < 2 * N; i += 2) {
        ans += L[i];
    }

    cout << ans << endl;

    return 0;
}