#include <bits/stdc++.h>

typedef long long LL;
typedef unsigned long long ULL;

inline LL read() {
	LL res = 0, bo = 1;
	char ch = getchar();
	while (ch < '0' || ch > '9') {
		if (ch == '-') bo = -1;
		ch = getchar();
	}
	while (ch >= '0' && ch <= '9') {
		res = (res << 1) + (res << 3) + ch - '0';
		ch = getchar();
	}
	return bo * res;
}

template <typename T>
void read(T &x) {
	x = read();
}

template <typename T, typename... Argv>
void read(T &a, Argv &... argv) {
	read(a);
	read(argv...);
}

typedef long long LL;
const int N = 41;

int n, A[N][N];
LL f[N][N][N], g[N][N][N], Ans;

int main() {
	n = read() << 1;
	for (int i = 1; i <= n; ++i)
		for (int j = 1; j <= n; ++j)
			scanf("%1d", &A[i][j]);
	for (int i = 1; i < n; ++i) {
		f[i][i][i] = 1;
		for (int j = i + 1; j < n; ++j) g[i][i][j] = A[j][i];
	}
	for (int z = 3; z <= n; z += 2)
		for (int i = 1; i <= n - z + 1; ++i) {
			int j = i + z - 1;
			for (int p = i; p < j; p += 2)
				for (int q = j; q > p; q -= 2) {
					LL sum = 0;
					for (int k = q; k <= j; ++k) sum += g[i][p][k] * f[q][j][k];
					for (int k = p + 1; k < q; ++k) f[i][j][k] += sum * f[p + 1][q - 1][k];
				}
			for (int w = i; w <= j; ++w)
				for (int k = j + 1; k <= n; ++k)
					g[i][j][k] += f[i][j][w] * A[k][w];
		}
	for (int i = 1; i < n; ++i) if (A[n][i]) Ans += f[1][n][i];
	printf("%lld\n", Ans);
	return 0;
}
