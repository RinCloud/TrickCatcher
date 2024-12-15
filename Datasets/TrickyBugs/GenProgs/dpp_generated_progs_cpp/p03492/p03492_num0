#include <iostream>
#include <vector>

using namespace std;

const int mod = 1000000007;

vector<vector<int>> tree;
vector<long long> factorial;
vector<long long> inv_factorial;

void calcFactorial(int n) {
    factorial.resize(n + 1, 1);
    inv_factorial.resize(n + 1, 1);
    for (int i = 2; i <= n; i++) {
        factorial[i] = (factorial[i - 1] * i) % mod;
        inv_factorial[i] = (inv_factorial[i - 1] * inv_factorial[i]) % mod;
    }
}

void dfs(int node, int parent, vector<int>& subtree_size) {
    subtree_size[node] = 1;
    for (int child : tree[node]) {
        if (child != parent) {
            dfs(child, node, subtree_size);
            subtree_size[node] += subtree_size[child];
        }
    }
}

long long choose(int n, int r) {
    long long numerator = factorial[n];
    long long denominator = (inv_factorial[r] * inv_factorial[n - r]) % mod;
    return (numerator * denominator) % mod;
}

int main() {
    int N;
    cin >> N;

    tree.resize(N + 1);
    for (int i = 0; i < N - 1; i++) {
        int x, y;
        cin >> x >> y;
        tree[x].push_back(y);
        tree[y].push_back(x);
    }

    calcFactorial(N);

    vector<int> subtree_size(N + 1);
    dfs(1, 0, subtree_size);

    long long ans = 0;
    for (int i = 1; i <= N; i++) {
        ans = (ans + (choose(N, i) * subtree_size[i]) % mod) % mod;
    }

    cout << ans << endl;

    return 0;
}