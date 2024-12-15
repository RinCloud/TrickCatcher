#include<bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

class DSU {
    vector<int> parent, size;
public:
    DSU(int n) {
        parent.resize(n + 1);
        size.resize(n + 1);
        for(int i = 1; i <= n; i++) {
            parent[i] = i;
            size[i] = 1;
        }
    }

    int find(int x) {
        if(x == parent[x]) return x;
        return parent[x] = find(parent[x]);
    }

    void unite(int x, int y) {
        x = find(x);
        y = find(y);
        if(x != y) {
            if(size[x] < size[y]) swap(x, y);
            parent[y] = x;
            size[x] += size[y];
        }
    }
};

int main() {
    int N, X, Y;
    cin >> N >> X >> Y;

    vector<pair<int, int>> balls(N + 1);

    for(int i = 1; i <= N; i++) {
        cin >> balls[i].first >> balls[i].second;
    }

    DSU dsu(N);

    for(int i = 1; i <= N; i++) {
        for(int j = i + 1; j <= N; j++) {
            if(balls[i].first == balls[j].first) {
                if(balls[i].second + balls[j].second <= X) {
                    dsu.unite(i, j);
                }
            } else {
                if(balls[i].second + balls[j].second <= Y) {
                    dsu.unite(i, j);
                }
            }
        }
    }

    vector<int> colorCount(N + 1, 0);
    int totalCount = 0;

    for(int i = 1; i <= N; i++) {
        if(dsu.find(i) == i) {
            colorCount[dsu.size[i]]++;
            totalCount++;
        }
    }

    vector<int> dp(N + 1, 0);
    dp[0] = 1;

    for(int i = 1; i <= N; i++) {
        for(int j = totalCount; j >= 1; j--) {
            if(colorCount[i] != 0) {
                dp[j] = (dp[j] + 1LL * dp[j - 1] * colorCount[i]) % MOD;
            }
        }
    }

    int result = 0;
    for(int i = 1; i <= totalCount; i++) {
        if(i % 2 == 1) {
            result = (result + dp[i]) % MOD;
        } else {
            result = (result - dp[i] + MOD) % MOD;
        }
    }

    cout << result << endl;

    return 0;
}
