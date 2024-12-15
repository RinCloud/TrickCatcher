#include <cstdio>

const int MAXN = 200001;
const int INF = 1e9 + 7;

int N, M;
int a[MAXN], b[MAXN];

bool con_to_N[MAXN];

void solve() {
    for (int i = 1; i <= N; i++) {
        con_to_N[i] = false;
    }
    for (int i = 1; i <= M; i++) {
        con_to_N[a[i]] |= (b[i] == N);
        con_to_N[b[i]] |= (a[i] == N);
    }

    bool possible = false;
    for (int i = 1; i <= M; i++) {
        if (a[i] == 1 && con_to_N[b[i]]) {
            possible = true;
        }
        if (b[i] == 1 && con_to_N[a[i]]) {
            possible = true;
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