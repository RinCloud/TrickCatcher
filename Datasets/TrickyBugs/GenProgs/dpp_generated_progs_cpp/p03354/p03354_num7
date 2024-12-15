#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> p(N + 1);
    for (int i = 1; i <= N; i++) {
        cin >> p[i];
    }

    vector<int> cnt(N + 1, 1);
    vector<bool> fixed(N + 1, false);

    for (int i = 0; i < M; i++) {
        int x, y;
        cin >> x >> y;
        
        if (fixed[x] || fixed[y]) continue;

        if (p[x] < p[y]) {
            cnt[p[y]]++;
            fixed[x] = true;
        } else if (p[x] > p[y]) {
            cnt[p[x]]++;
            fixed[y] = true;
        }
    }

    int ans = 0;
    for (int i = 1; i <= N; i++) {
        if (cnt[i] == i) ans++;
    }

    cout << ans << endl;

    return 0;
}