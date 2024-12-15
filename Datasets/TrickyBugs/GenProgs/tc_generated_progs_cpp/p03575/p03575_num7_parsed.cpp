#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int n, m, ans;
vector<int> s;
vector<vector<int>> a;

void dfs(int p, int parent) {
    s[p] = 1;
    for (int i = 1; i <= n; i++) {
        if (a[p][i] && i != parent) {
            if (s[i] == 0) {
                dfs(i, p);
            }
            else if (s[i] == 1) {
                ans++;
                a[p][i] = a[i][p] = 0;
            }
        }
    }
    s[p] = 2;
}

int main()
{
    cin >> n >> m;
    a = vector<vector<int>>(n+1, vector<int>(n+1));
    s = vector<int>(n+1);
    for (int i = 0; i < m; i++) {
        int t1, t2;
        scanf("%d %d", &t1, &t2);
        a[t1][t2] = a[t2][t1] = 1;
    }
    for (int i = 1; i <= n; i++) {
        if (s[i] == 0) {
            dfs(i, 0);
        }
    }
    cout << ans;
    return 0;
}
