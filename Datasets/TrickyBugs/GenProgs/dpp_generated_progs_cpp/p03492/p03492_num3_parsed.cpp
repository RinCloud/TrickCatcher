#include <iostream>
#include <vector>
#include <cstring>
#define MOD 1000000007
using namespace std;

int N;
vector<int> edges[5005];
vector<int> path; // stores the path of the tree
long long memo[5005][3];
/// memo[v][0] = number of ways to choose p in the subtree rooted at v such that v is chosen first
/// memo[v][1] = number of ways to choose p in the subtree rooted at v such that v is not chosen first,
/// but the path length to the node that is chosen first is maximum
/// memo[v][2] = number of ways to choose p in the subtree rooted at v such that v is not chosen first,
/// but the path length to the node that is chosen first is not maximum

long long dp(int v, int choice) {
    if (memo[v][choice] != -1) {
        return memo[v][choice];
    }

    memo[v][choice] = 0;
    if (choice == 0) {
        memo[v][choice] = 1;
        for (int u : edges[v]) {
            memo[v][choice] *= (dp(u, 1) + dp(u, 2));
            memo[v][choice] %= MOD;
        }
    } else if (choice == 1) {
        long long max1 = -1, max2 = -1; // stores the two maximum path lengths
        for (int u : edges[v]) {
            long long pathLen = 1 + dp(u, 0);
            if (pathLen >= max1) {
                max2 = max1;
                max1 = pathLen;
            } else if (pathLen > max2) {
                max2 = pathLen;
            }
        }

        for (int u : edges[v]) {
            long long pathLen = 1 + dp(u, 0);
            if (pathLen == max1) {
                memo[v][choice] += dp(u, 0) * dp(u, 2); // count the number of ways to choose p such that path length to the node chosen first = max1
            } else {
                memo[v][choice] += dp(u, 0) * dp(u, 1); // count the number of ways to choose p such that path length to the node chosen first < max1
            }
            memo[v][choice] %= MOD;
        }
    } else { // choice == 2
        long long max1 = -1; // stores the maximum path length
        for (int u : edges[v]) {
            long long pathLen = 1 + dp(u, 0);
            if (pathLen >= max1) {
                max1 = pathLen;
            }
        }

        for (int u : edges[v]) {
            long long pathLen = 1 + dp(u, 0);
            if (pathLen == max1) {
                memo[v][choice] += dp(u, 0) * dp(u, 2); // count the number of ways to choose p such that path length to the node chosen first = max1
            } else {
                memo[v][choice] += dp(u, 0) * dp(u, 1); // count the number of ways to choose p such that path length to the node chosen first < max1
            }
            memo[v][choice] %= MOD;
        }
    }

    return memo[v][choice];
}

int main() {
    memset(memo, -1, sizeof(memo));
    cin >> N;
    for (int i = 1; i < N; i++) {
        int a, b;
        cin >> a >> b;
        edges[a].push_back(b);
        path.push_back(a);
        path.push_back(b);
    }
    int ans = 0;
    ans += dp(1, 0);
    ans += dp(1, 1);
    ans += dp(1, 2);
    ans %= MOD;
    cout << ans << endl;
    return 0;
}