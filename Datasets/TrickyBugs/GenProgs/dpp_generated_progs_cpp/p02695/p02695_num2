#include <iostream>
#include <vector>
using namespace std;

int N, M, Q;
vector<int> a, b, c, d;
int ans;

void dfs(vector<int>& A) {
    if (A.size() == N + 1) {
        int score = 0;
        for (int i = 0; i < Q; i++) {
            if (A[b[i]] - A[a[i]] == c[i]) {
                score += d[i];
            }
        }
        ans = max(ans, score);
        return;
    }
    A.push_back(A.back());
    while (A.back() <= M) {
        dfs(A);
        A.back()++;
    }
    A.pop_back();
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
    vector<int> A(1, 1);
    dfs(A);
    cout << ans << endl;
    return 0;
}