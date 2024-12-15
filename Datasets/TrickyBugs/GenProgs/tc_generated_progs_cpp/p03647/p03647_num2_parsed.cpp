#include <cstdio>

int N, M;
int a[200001], b[200001];

bool con_to_N[200001];

void solve() {
	for (int i = 1; i <= M; i++) {
		con_to_N[a[i]] = (b[i] == N);
	}

	bool possible = false;
	for (int i = 1; i <= M; i++) {
		if (a[i] == 1 && con_to_N[b[i]]) {
			possible = true;
			break; // Break loop when a possible path is found
		}
	}

	printf("%s\n", possible ? "POSSIBLE" : "IMPOSSIBLE");
}

int main() {
	scanf("%d%d", &N, &M);
	for (int i = 1; i <= M; i++) {
		scanf("%d%d", &a[i], &b[i]);
	}

	solve();
	return 0;
}