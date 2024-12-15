#include <bits/stdc++.h>
using namespace std;
const int MAX = 200005;
int n, q, ans;
int X[MAX], Y[MAX], H[MAX];
struct V {
    int x, y;
} A[MAX];
struct X {
    int an1, an2, f;
} Q[MAX];
int Find(int i) {
    if(Q[i].f == i) return Q[i].f;
    return Q[i].f = Find(Q[i].f);
}
void BU(int a, int b) {
    a = Find(a), b = Find(b);
    if(a ^ b) {
        Q[a].an1 += Q[b].an1;
        Q[a].an2 += Q[b].an2;
        Q[b].f = a;
    }
}
int main() {
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        scanf("%d %d", &A[i].x, &A[i].y);
        if(!X[A[i].x]) {
            X[A[i].x] = ++q;
            Q[q].an2 = 1;
            Q[q].f = q;
        }
        if(!Y[A[i].y]) {
            Y[A[i].y] = ++q;
            Q[q].an1 = 1;
            Q[q].f = q;
        }
    }
    for(int i = 1; i <= n; i++)
        BU(X[A[i].x], Y[A[i].y]);
    for(int i = 1; i <= n; i++) {
        int x = Find(X[A[i].x]);
        if(!H[x]) {
            H[x] = 1;
            ans += Q[x].an1 * Q[x].an2;
        }
        int y = Find(Y[A[i].y]);
        if(!H[y]) {
            H[y] = 1;
            ans += Q[y].an1 * Q[y].an2;
        }
    }
    ans -= n;
    printf("%d", ans);
    return 0;
}