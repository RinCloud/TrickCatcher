#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cstring>

const int N = 1e5 + 51;

int p[N];
int f(int x) { return p[x] ? p[x] = f(p[x]) : x; }

int n, m, q, op[N], x[N], y[N], cnt, c0;
int main() {
	scanf("%d%d%d", &n, &m, &q), cnt = n;
	for (int i = 1; i <= q; i++) {
		scanf("%d%d%d", &x[i], &y[i], &op[i]), x[i]++, y[i]++;
		int u = x[i], v = y[i];
		if (!op[i]) {
			c0++;
			if ((u = f(u)) != (v = f(v))) p[u] = v, cnt--;
		}
	}
	for (int i = 1; i <= q; i++)
		if (op[i] && f(x[i]) == f(y[i])) return printf("No"), 0;
	if (n - (c0 == q) <= m && m <= n - cnt + 1ll * cnt * (cnt - 1) / 2)
		printf("Yes");
	else
		printf("No");
}