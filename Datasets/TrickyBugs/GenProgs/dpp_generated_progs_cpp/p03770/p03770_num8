#include <iostream>
#include <vector>
#include <unordered_set>
#include <map>
#include <cmath>
#include <algorithm>
using namespace std;

const int MOD = 1000000007;

int main() {
    int N, X, Y;
    cin >> N >> X >> Y;

    vector<pair<int, int>> balls(N);
    for (int i = 0; i < N; i++) {
        cin >> balls[i].first >> balls[i].second;
    }

    vector<unordered_set<int>> sameColor(N + 1);
    map<int, int> colorCount;
    for (auto color: balls) {
        sameColor[color.first].insert(color.second);
        colorCount[color.first]++;
    }

    vector<long long> factorial(N + 1);
    factorial[0] = 1;
    for (int i = 1; i <= N; i++) {
        factorial[i] = (factorial[i - 1] * i) % MOD;
    }

    long long ans = 1;

    for (auto color: sameColor) {
        ans = (ans * factorial[color.size()]) % MOD;
    }

    int diffColorCount = N - sameColor.size();

    vector<long long> dp(N + 1, -1);

    function<long long(int)> solve = [&](int cnt) -> long long {
        if (cnt == 1) {
            return 1;
        }

        if (dp[cnt] != -1) {
            return dp[cnt];
        }

        long long res = 0;
        for (int i = 1; i <= min(cnt - 1, diffColorCount); i++) {
            res += (solve(i) * factorial[diffColorCount]) % MOD;
            res %= MOD;
        }

        dp[cnt] = res;

        return res;
    };

    ans = (ans * solve(diffColorCount + 1)) % MOD;

    cout << ans << endl;

    return 0;
}