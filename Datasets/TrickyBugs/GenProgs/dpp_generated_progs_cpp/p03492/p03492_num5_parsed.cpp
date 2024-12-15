#include <iostream>
#include <vector>

using namespace std;

const int MOD = 1000000007;

vector<vector<int>> graph;
vector<long long> subtreeSize;
vector<long long> factorial;

void calculateSubtreeSize(int cur, int prev) {
    subtreeSize[cur] = 1;
    for (int next : graph[cur]) {
        if (next != prev) {
            calculateSubtreeSize(next, cur);
            subtreeSize[cur] += subtreeSize[next];
        }
    }
}

void calculateFactorial(int n) {
    factorial.resize(n + 1);
    factorial[0] = 1;
    for (int i = 1; i <= n; i++) {
        factorial[i] = (factorial[i - 1] * i) % MOD;
    }
}

long long modpow(long long base, long long exp) {
    long long result = 1;
    while (exp > 0) {
        if (exp & 1)
            result = (result * base) % MOD;
        base = (base * base) % MOD;
        exp >>= 1;
    }
    return result;
}

long long inverse(long long x) {
    return modpow(x, MOD - 2);
}

void solve(int cur, int prev, long long &ans) {
    for (int next : graph[cur]) {
        if (next != prev) {
            long long numerator = (subtreeSize[next] * factorial[N - subtreeSize[next]]) % MOD;
            long long denominator = factorial[N - 1];
            long long contribution = (numerator * inverse(denominator)) % MOD;

            ans = (ans + contribution) % MOD;

            solve(next, cur, ans);
        }
    }
}

int main() {
    int N;
    cin >> N;

    graph.resize(N + 1);
    subtreeSize.resize(N + 1);

    for (int i = 1; i < N; i++) {
        int x, y;
        cin >> x >> y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }

    calculateSubtreeSize(1, 0);
    calculateFactorial(N);

    long long ans = 0;
    solve(1, 0, ans);

    cout << ans << endl;

    return 0;
}