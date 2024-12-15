#include<bits/stdc++.h>
using namespace std;

int N, M, Q;
vector<int> a,b,c,d;

int solve(vector<int>& A) {
    int res = 0;
    for (int i = 0; i < Q; ++i) {
        if (A[b[i]] - A[a[i]] == c[i]) {
            res += d[i];
        }
    }
    return res;
}

int dfs(vector<int>& A, int cur) {
    if (cur == N+1) {
        return solve(A);
    }
    int res = 0;
    A[cur] = A[cur-1];
    while (A[cur] <= M) {
        res = max(res, dfs(A, cur+1));
        A[cur]++;
    }
    return res;
}

int main() {
    cin >> N >> M >> Q;
    a.resize(Q);
    b.resize(Q);
    c.resize(Q);
    d.resize(Q);
    for (int i = 0; i < Q; ++i) {
        cin >> a[i] >> b[i] >> c[i] >> d[i];
    }
    vector<int> A(N+1, 1);
    cout << dfs(A, 1) << endl;
    return 0;
}