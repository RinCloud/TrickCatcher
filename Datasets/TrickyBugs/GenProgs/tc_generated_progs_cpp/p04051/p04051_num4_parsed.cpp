#include <iostream>
#include <cstdio>
#define int long long
#define N 200002
using namespace std;
const int mod=1000000007;
int n,i,j,a[N],b[N],f[4002][4002],fac[N],inv[N],ans;
int read()
{
    char c=getchar();
    int w=0;
    while(c<'0'||c>'9') c=getchar();
    while(c<='9'&&c>='0'){
        w=w*10+c-'0';
        c=getchar();
    }
    return w;
}
int poww(int a,int b)
{
    int ans=1,base=a;
    while(b){
        if(b&1) ans=ans*base%mod;
        base=base*base%mod;
        b>>=1;
    }
    return ans;
}
int C(int n,int m)
{
    return fac[n]*inv[m]%mod*inv[n-m]%mod;
}
signed main()
{
    fac[0]=1;
    for(i=1;i<=8000;i++) fac[i]=fac[i-1]*i%mod;
    inv[8000]=poww(fac[8000],mod-2);
    for(i=7999;i>=0;i--) inv[i]=inv[i+1]*(i+1)%mod;
    n=read();
    for(i=1;i<=n;i++){
        a[i]=read(),b[i]=read();
        f[2000-a[i]][2000-b[i]]++;
    }
    for(i=0;i<=4000;i++){
        for(j=0;j<=4000;j++) {
            if(i==0 && j==0) continue;
            if(i==0) f[i][j]=(f[i][j]+f[i][j-1])%mod;
            else if(j==0) f[i][j]=(f[i][j]+f[i-1][j])%mod;
            else f[i][j]=(f[i][j]+f[i-1][j]+f[i][j-1])%mod;
        }
    }
    for(i=1;i<=n;i++){
        ans=(ans+f[a[i]+2000][b[i]+2000])%mod;
        ans=(ans-C(2*(a[i]+b[i]),2*a[i])+mod)%mod;
    }
    ans=ans*poww(2,mod-2)%mod;
    printf("%lld\n",ans);
    return 0;
}