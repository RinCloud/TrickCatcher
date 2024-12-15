#include<bits/stdc++.h>
using namespace std;

int N, M, Q;
vector<int> a, b, c, d;
int ans;

void dfs(vector<int>& A) {
    if (A.size() == N) {
        int score = 0;
        for (int i = 0; i < Q; i++) {
            if (A[b[i] - 1] - A[a[i] - 1] == c[i]) {
                score += d[i];
            }
        }
        ans = max(ans, score);
        return;
    }
    int last = (A.empty() ? 1 : A.back());
    for (int i = last; i <= M; i++) {
        A.push_back(i);
        dfs(A);
        A.pop_back();
    }
}

int main() {
    cin >> N >> M >> Q;
    a.resize(Q);
    b.resize(Q);
    c.resize(Q);
    d.resize(Q);
    for (int i = 0; i < Q; i++) {
        cin >> a[i] >> b[i] >> c[i] >> d[i];
    }
    ans = 0;
    vector<int> A;
    dfs(A);
    cout << ans << endl;
    return 0;
}