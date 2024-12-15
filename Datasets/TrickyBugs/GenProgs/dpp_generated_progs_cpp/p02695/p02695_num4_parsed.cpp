#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N, M, Q;
vector<int> A;
vector<int> a, b, c, d;

int solve(int idx, int last) {
    if (idx == N) {
        int sum = 0;
        for (int i = 0; i < Q; i++) {
            if (A[b[i]] - A[a[i]] == c[i]) {
                sum += d[i];
            }
        }
        return sum;
    }
    int res = 0;
    for (int i = last; i <= M; i++) {
        A[idx] = i;
        res = max(res, solve(idx+1, i));
    }
    return res;
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
    A.resize(N);
    int ans = solve(0, 1);
    cout << ans << endl;
    return 0;
}