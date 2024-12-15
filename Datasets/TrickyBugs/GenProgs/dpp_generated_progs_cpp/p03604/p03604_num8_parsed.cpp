#include <bits/stdc++.h>
using namespace std;
 
const long long MOD = 1e9+7;
 
long long powmod(long long a, long long b) {
    long long res = 1;
    a %= MOD;
    assert(b >= 0);
    for (; b; b >>= 1) {
        if (b & 1) res = res * a % MOD;
        a = a * a % MOD;
    }
    return res;
}
 
const int TWO = 300005;
long long fac[TWO], ifac[TWO];
void init() {
    fac[0] = 1;
    for (int i = 1; i < TWO; i++) fac[i] = fac[i-1] * i % MOD;
    ifac[TWO-1] = powmod(fac[TWO-1], MOD-2);
    for (int i = TWO-2; i >= 0; i--) ifac[i] = ifac[i+1] * (i+1) % MOD;
}
 
long long comb(int a, int b) {
    if (b < 0 || b > a) return 0;
    return fac[a] * ifac[b] % MOD * ifac[a-b] % MOD;
}
 
int dsu[TWO];
int par(int a) {
    return dsu[a] < 0 ? a : dsu[a] = par(dsu[a]);
}
void merge(int a, int b) {
    a = par(a); b = par(b);
    if (a != b) {
        if (dsu[a] > dsu[b]) swap(a, b);
        if (dsu[a] == dsu[b]) dsu[a]--;
        dsu[b] = a;
    }
}
int H[TWO];
int N;
void initH() {
    for (int i = 0; i <= N; i++) {
        H[i] = (i % 2 == 0 ? 0 : comb(i, 0) * fac[i-1] % MOD);
    }
}
 
long long coeff(int t) {
    long long res = 0;
    for (int j = 0; j <= t; j++) {
        res += comb(t,j) * H[j] % MOD * powmod(t-j, N) % MOD;
    }
    return res % MOD;
}
 
int X[TWO][2];
int isB[TWO];
 
long long solve() {
    memset(dsu, -1, sizeof(dsu));
    long long res = fac[N * 2];
    for (int i = 0; i < 2 * N; i++) {
        merge(X[i][0], X[i][1]);
    }
    initH();
    for (int i = 1; i <= N; i++) if (dsu[i] < 0) {
        res = res * coeff(-dsu[i]) % MOD;
    }
    return res;
}
 
int main() {
    init();
    scanf("%d", &N);
    for (int i = 0; i < 2 * N; i++) {
        scanf("%d%d", &X[i][0], &X[i][1]);
        isB[i] = X[i][0] == 0;
    }
    long long res = solve();
    for (int i = 0; i < 2 * N; i++) {
        isB[i] = !isB[i];
        swap(X[i][0], X[i][1]);
        res += MOD - solve();
        if (res >= MOD) res -= MOD;
        isB[i] = !isB[i];
        swap(X[i][0], X[i][1]);
    }
    printf("%lld\n", res);
    return 0;
}