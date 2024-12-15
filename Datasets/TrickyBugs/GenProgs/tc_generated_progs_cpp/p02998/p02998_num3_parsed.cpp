#include <bits/stdc++.h>
using namespace std;

const int MAX = 100005;

int n, now, q, ans;
int X[MAX], Y[MAX], H[MAX];
struct V {
    long long x, y;
} A[MAX];
struct X {
    int an1, an2, f;
} Q[2 * MAX];

int Find(int i) {
    if (Q[i].f == i) return Q[i].f;
    return Q[i].f = Find(Q[i].f);
}

void BU(int a, int b) {
    a = Find(a), b = Find(b);
    if (a != b) {
        Q[a].an1 += Q[b].an1;
        Q[a].an2 += Q[b].an2;
        Q[b].f = a;
    }
}

int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%lld %lld", &A[i].x, &A[i].y);
        if (!X[A[i].x]) {
            X[A[i].x] = ++q;
            Q[q].an2 = 1;
            Q[q].f = q;
        }
        if (!Y[A[i].y]) {
            Y[A[i].y] = ++q;
            Q[q].an1 = 1;
            Q[q].f = q;
        }
    }
    for (int i = 1; i <= n; i++)
        BU(X[A[i].x], Y[A[i].y]);
    for (int i = 1; i <= n; i++) {
        int qq = Find(X[A[i].x]);
        if (!H[qq]) {
            H[qq] = 1;
            ans += Q[qq].an1 * Q[qq].an2;
        }
        qq = Find(Y[A[i].y]);
        if (!H[qq]) {
            H[qq] = 1;
            ans += Q[qq].an1 * Q[qq].an2;
        }
    }
    ans -= n;
    printf("%d", ans);
    return 0;
}
