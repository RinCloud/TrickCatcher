#include <cstdio>

const int MAXN = 200001;
int N, M;
int a[MAXN], b[MAXN];

bool con_to_N[MAXN];

void solve() {
    for (int i = 1; i <= M; i++) {
        con_to_N[a[i]] = (b[i] == N);
    }

    bool possible = false;
    for (int i = 1; i <= M; i++) {
        if (a[i] == 1 && con_to_N[b[i]]) {
            possible = true;
            break; // Stop the loop if a path is found
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
