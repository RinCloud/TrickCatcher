#include <iostream>
#include <vector>
#include <bitset>
typedef long long ll;
using namespace std;

const int MAXN = 40;

int n;
int a[MAXN + 5][MAXN + 5];
ll ans;

bitset<MAXN + 5> used;
int perm[2 * MAXN + 5];
vector<int> pairs;

void dfs(int idx)
{
    if (idx == (2 * n) + 1)
    {
        int cnt = 0;
        for (int i = 0; i < 2 * n; i += 2)
        {
            int u = perm[i], v = perm[i + 1];
            if (a[u][v])
            {
                ++cnt;
            }
        }
        if (cnt == n)
        {
            ++ans;
        }
        return;
    }
    if (idx & 1)
    {
        int i = idx / 2;
        for (int j = 1; j <= 2 * n; ++j)
        {
            if (!used[j])
            {
                used[j] = 1;
                perm[idx] = j;
                dfs(idx + 1);
                used[j] = 0;
            }
        }
    }
    else
    {
        if (!used[perm[idx - 1]])
        {
            return;
        }
        int i = idx / 2;
        for (int j = perm[idx - 1] + 1; j <= 2 * n; ++j)
        {
            if (!used[j])
            {
                used[j] = 1;
                perm[idx] = j;
                dfs(idx + 1);
                used[j] = 0;
            }
        }
    }
}
int main()
{
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    cin >> n;
    for (int i = 1; i <= 2 * n; ++i)
    {
        string s;
        cin >> s;
        for (int j = 1; j <= 2 * n; ++j)
        {
            a[i][j] = s[j - 1] - '0';
        }
    }
    dfs(1);
    cout << ans << endl;
    return 0;
}