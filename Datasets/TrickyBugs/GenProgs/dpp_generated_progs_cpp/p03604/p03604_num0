#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

#define MOD 1000000007

int N;
vector<pair<int, int>> balls;

// Disjoint Set Union data structure
class DSU {
    vector<int> parent, rank;

public:
    DSU(int n) {
        parent.resize(n);
        rank.resize(n, 1);
        for (int i = 0; i < n; i++) {
            parent[i] = i;
        }
    }

    int find(int x) {
        if (parent[x] != x) {
            parent[x] = find(parent[x]);
        }
        return parent[x];
    }

    void merge(int x, int y) {
        int px = find(x), py = find(y);
        if (px != py) {
            if (rank[px] > rank[py]) {
                parent[py] = px;
            } else if (rank[py] > rank[px]) {
                parent[px] = py;
            } else {
                parent[px] = py;
                rank[py]++;
            }
        }
    }
};

// Comparator function to sort balls in increasing order of y-coordinate
bool compare(pair<int, int> a, pair<int, int> b) {
    return a.second < b.second;
}

// Function to calculate factorial mod 1e9+7
int factMod(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact = (fact * i) % MOD;
    }
    return fact;
}

int solve() {
    DSU dsu(2 * N);
    sort(balls.begin(), balls.end());
    int count = N;

    for (int i = 0; i < 2 * N - 1; i++) {
        if (balls[i].first == balls[i + 1].first) {
            dsu.merge(i, i + 1);
            count--;
        }
    }

    sort(balls.begin(), balls.end(), compare);

    int curr = -1, group_count = 0;
    long long ans = 1;

    for (int i = 0; i < 2 * N; i++) {
        if (balls[i].second != curr) {
            ans = (ans * factMod(group_count)) % MOD;
            curr = balls[i].second;
            group_count = 0;
        }
        group_count++;
    }

    ans = (ans * factMod(group_count)) % MOD;
    ans = (ans * factMod(count)) % MOD;

    return ans;
}

int main() {
    cin >> N;
    balls.resize(2 * N);
    for (int i = 0; i < 2 * N; i++) {
        cin >> balls[i].first >> balls[i].second;
    }

    int ans = solve();

    cout << ans << endl;

    return 0;
}