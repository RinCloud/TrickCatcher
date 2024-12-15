#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pii;

const int maxn = 3005;
const int mo = (int)(1e9) + 7;
char s[maxn];
pii b[maxn];
int a[maxn], f[maxn], g[maxn];
int n, m, tot, cnt;

inline void addX(int p) {
	if (s[p] == '1') {
		for (int j = n; j; --j) f[j] = f[j - 1]; f[0] = 0; ++cnt;
	} ++tot;
}

inline void add(int& x, int v) {
	x += v; if (x >= mo) x -= mo;
}

int main() {
	scanf("%d%d", &n, &m);
	scanf("%s", s + 1);
	for (int i = 1; i <= m; ++i) scanf("%d%d", &b[i].first, &b[i].second);
	int ps = 1, mx = 1; f[0] = 1;
	for (int i = 1; i <= n; ++i) {
		while (mx <= i) addX(mx++);
		for (; ps <= m && b[ps].first == i; ++ps) {
			while (mx <= b[ps].second) addX(mx++);
		}
		memset(g, 0, sizeof(g));
		for (int j = 0; j <= cnt; ++j) {
			if (j) add(g[j - 1], f[j]); 
			if (j < tot) add(g[j], f[j]);
		}
		memcpy(f, g, sizeof(g)); --tot;
	} printf("%d\n", f[0]);
	return 0;
}