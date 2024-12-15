#include <bits/stdc++.h>
using namespace std;
const int MaxN = 303;
int n,m,a[MaxN][MaxN];
int p[MaxN],cnt[MaxN];
bool f[MaxN];

int main() {
    scanf("%d%d",&n,&m);
    for (int i=1;i<=n;++i) for (int j=1;j<=m;++j) scanf("%d",&(a[i][j]));
    memset(f,0,sizeof f);
    for (int i=1;i<=n;++i) p[i]=1,cnt[a[i][p[i]]]++;
    int ans=0;
    for (int i=1;i<=m;++i) ans=max(ans,cnt[i]);
    ans=min(ans,n);
    for (int i=1;i<=m;++i) {
        int mx=1;
        for (int j=2;j<=m;++j) if (cnt[j]>cnt[mx]) mx=j;
        cnt[mx]=0,f[mx]=false;
        for (int j=1;j<=n;++j) {
            if (!f[a[j][p[j]]]) {
                while (p[j]<=m && !f[a[j][p[j]]]) p[j]++;
                cnt[a[j][p[j]]]++;
                f[a[j][p[j]]]=true;
            }
        }
        mx=1;
        for (int j=2;j<=m;++j) if (cnt[j]>cnt[mx]) mx=j;
        ans=min(ans,cnt[mx]);
    }
    printf("%d\n",ans);
    return 0;
} 
