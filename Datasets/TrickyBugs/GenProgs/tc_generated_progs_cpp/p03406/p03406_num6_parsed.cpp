#include <bits/stdc++.h>
using namespace std;
#define lor(a,b,c) for(register int a=b;a<=c;++a)
#define ror(a,b,c) for(register int a=c;a>=b;--a)
#define mov(a) (1<<(a))
#define lowbit(a) (a&(-a))
#define rk(i) (mov(n)-i+1)

const int N=16,M=17,S=1<<N,MOD=1e9+7;
int n,m,a[M];
int fac[S],inv[S],dp[M][S],g[S],siz[S],f;

inline bool cmp(const int &a,const int &b) {return a>b;}
inline int qsm(int a,int b) {int ans=1; while(b) {if(b&1) ans=1ll*ans*a%MOD; a=1ll*a*a%MOD; b>>=1;} return ans;}
inline int C(int a,int b) {return b<0||a<b?0:1ll*fac[a]*inv[b]%MOD*inv[a-b]%MOD;}
inline void inc(int &a,int b) {(a+=b)>=MOD?a-=MOD:a;}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("test.in","r",stdin);
    #endif
    
    scanf("%d%d",&n,&m);
    lor(i,1,m) scanf("%d",&a[i]);
    sort(a+1,a+1+m,cmp);
    fac[0]=1;
    lor(i,1,mov(n)-1) fac[i]=1ll*fac[i-1]*i%MOD;
    inv[mov(n)-1]=qsm(fac[mov(n)-1],MOD-2);
    ror(i,0,mov(n)-2) inv[i]=1ll*inv[i+1]*(i+1)%MOD;
    dp[0][0]=1;
    lor(i,1,m) lor(j,0,mov(n)-1){
        dp[i][j]=dp[i-1][j];
        lor(k,0,n-1) if(j&mov(k)){
            inc(dp[i][j],1ll*dp[i-1][j^mov(k)]*C(rk(a[i])-1-(j^mov(k)),mov(k)-1)%MOD*fac[mov(k)]%MOD);
        }
    }
    lor(j,0,mov(n)-1) g[j]=1ll*dp[m][j]*fac[mov(n)-1-j]%MOD;
    lor(j,1,mov(n)-1) siz[j]=siz[j-lowbit(j)]+1;
    lor(j,0,mov(n)-1) inc(f,siz[j]&1?MOD-g[j]:g[j]);
    f=1ll*f*mov(n)%MOD;
    printf("%d\n",f);

    return 0;
}
