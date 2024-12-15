#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

typedef long long ll;
using namespace std;

const int MOD = 1e9 + 7;

int main() {
    int N;
    cin >> N;

    vector<pair<int, int>> balls(2 * N);
    for (int i = 0; i < 2 * N; i++) {
        cin >> balls[i].first >> balls[i].second;
    }

    vector<int> row(N + 1, 0);
    vector<int> col(N + 1, 0);
    vector<int> fact(2 * N + 1, 0);
    
    fact[0] = 1;
    for (int i = 1; i <= 2 * N; i++) {
        fact[i] = (fact[i - 1] * i) % MOD;
    }

    sort(balls.begin(), balls.end());

    for (int i = 0; i < 2 * N; i++) {
        int x = balls[i].first;
        int y = balls[i].second;

        if (x > 1 && y > 1) {
            row[x]++;
            col[y]++;
        }
    }

    ll ans = fact[2 * N];
    for (int i = 1; i <= N; i++) {
        ans = (ans - fact[N - i + 1] * row[i]) % MOD;
        ans = (ans - fact[N - i + 1] * col[i]) % MOD;
    }

    if (ans < 0) ans += MOD;

    cout << ans << endl;

    return 0;
}