#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int N=210;
int dp[N][N],comb[N][N];
ll mod;
ll powmod(ll a,ll b) {
    ll res=1; a%=mod;
    for (;b;b>>=1) {
        if(b&1) res=res*a%mod;
        a=a*a%mod;
    }
    return res;
}

void upd(int &a,int b) {
    a+=b; if (a>=mod) a-=mod;
}

int calc(int n,int m,int a,int b) {
    int ans=comb[n+m][n];
    pair<int,int> p(0,0); 
    int sg=0;
    while (1) {
        if (sg==0) p={p.second-a,p.first+a};
        else p={p.second-b,p.first+b};
        if (p.first>n||p.second>m) break;
        if (sg==0) ans=(ans+mod-comb[n+m][n-p.first])%mod;
        else ans=(ans+comb[n+m][n-p.first])%mod;
        sg^=1;
    }
    p={0,0}; 
    sg=0;
    while (1) {
        if (sg==0) p={p.second-b,p.first+b};
        else p={p.second-a,p.first+a};
        if (p.first>n||p.second>m) break;
        if (sg==0) ans=(ans+mod-comb[n+m][n-p.first])%mod;
        else ans=(ans+comb[n+m][n-p.first])%mod;
        sg^=1;
    }
    return ans;
}

int solve(int x,int y) {
    if (y<0) return 0;
    if (y==0) return x<=1;
    int ans=0;
    for (int a=2;a<=y+1;a++) {
        int b=x-a;
        if (b<1||b>y+1) continue;
        int t=calc(a-1,b,b-(y+2),(y+2)-a);
        if (a+b<=y+1) upd(t,mod-1);
        upd(ans,t);
    }
    return ans;
}

int main() {
    int n, k;
    cin >> n >> k >> mod;

    for (int i=0;i<=2*n;i++) {
        comb[i][0]=comb[i][i]=1;
        for (int j=1;j<i;j++) {
            comb[i][j]=(comb[i-1][j-1]+comb[i-1][j])%mod;
        }
    }

    int ans=0;

    for (int deg=0;deg<=n-2;deg++) {
        ans=(ans+(ll)solve(n-deg,k-deg)*powmod(n-deg,mod-2))%mod;
    }
    if (k>=n-1) {
        ans=(ans+1)%mod;
    }
    for(int i=1;i<=n;i++) {
        ans=(ll)ans*i%mod;
    }
    printf("%d\n", ans);
}
