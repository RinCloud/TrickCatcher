#include <iostream>
#include <cstdio>
using namespace std;

#define MAXN 50

int n, m, ans, s[MAXN+1];
bool a[MAXN+1][MAXN+1];

void f(int p) {
    int i;
    if (s[p] == 1) {
        ans++;
        for (i = 1; i <= n; i++) {
            if (a[p][i] == 1) break;
        }
        a[p][i] = a[i][p] = 0;
        s[p]--;
        s[i]--;
        f(i);
    }
}

int main()
{
    int i ,j, t1, t2;
    cin >> n >> m;
    while (m--) {
        scanf ("%d %d", &t1, &t2);
        a[t1][t2] = a[t2][t1] = 1;
        s[t1]++;
        s[t2]++;
    }
    for (i = 1; i <= n; i++) {
        f(i);
    }
    cout << ans;
    return 0;
}
