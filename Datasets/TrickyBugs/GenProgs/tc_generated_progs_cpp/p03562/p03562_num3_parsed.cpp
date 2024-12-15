#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<string>
#include<iostream>
#include<sstream>
#include<bitset>
#include<vector>

#define REP(I, N) for (int I = 0; I < (N); ++I)
#define RS(X) scanf("%s", (X))
#define PII pair<int,int>
#define F first
#define S second
typedef long long LL;
using namespace std;
const int MOD = 998244353;
const int SIZE = 1e6 + 10;

bitset<4000> X, d[4000];
bitset<4000> A[6];
int len[6], Xn;
char s[SIZE];
int N;

void read(bitset<4000> &input, int &l) {
    RS(s);
    l = strlen(s);
    for (int i = 0; i < l; i++) {
        if (s[i] == '1') {
            input.set(l-1-i);
        }
    }
}

int mi_len = 0, mi_id = 0;

void add(bitset<4000> a, int l) {
    for (int j = l; j >= mi_len; j--) {
        if (a[j]) a ^= d[j];
    }
    if (a.none()) return;
    for (int j = mi_len - 1; j >= 0; j--) {
        if (a[j]) {
            for (int i = mi_len - 1; i >= j; i--) {
                d[i] = a << (i - j);
            }
            int original_len = mi_len;
            mi_len = j;
            add(a << (original_len - j), original_len);
            return;
        }
    }
}

int main() {
    scanf("%d", &N);
    read(X, Xn);
    REP(i, N) read(A[i], len[i]);
    mi_len = 4000;
    REP(i, N) {
        if (mi_len > len[i]) {
            mi_len = len[i];
            mi_id = i;
        }
    }
    mi_len--;
    for (int i = 3999; i >= mi_len; i--) {
        d[i] = A[mi_id] << (i - mi_len);
    }
    REP(i, N) {
        if (i == mi_len) continue;
        add(A[i], len[i] - 1);
    }
    bitset<4000> fin = X;
    LL an = 0;
    for (int i = Xn - 1; i >= mi_len; i--) {
        an <<= 1;
        if (X[i]) an++;
        an %= MOD;
        if (fin[i]) fin ^= d[i];
    }
    bool suc = true;
    for (int i = mi_len - 1; i >= 0; i--) {
        if (fin[i]) {
            if (!X[i]) {
                suc = false;
            }
            break;
        }
    }
    if (suc) an++;
    printf("%lld\n", an % MOD);
    return 0;
}
