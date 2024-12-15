#include <iostream>
#include <cstring>
using namespace std ;
const int N = 400,M = N+10,mod = 998244353 ;
inline int add(int a,int b){ return a+b >= mod ? a+b-mod : a+b ; }
inline int sub(int a,int b){ return a >= b ? a-b : a-b+mod ; }
inline int mul(int a,int b){ return 1ll*a*b%mod ; }
inline int power(int a,int b){
    int res = 1 ;
    for( ; b ; b >>= 1){
        if(b&1) res = mul(res,a) ;
        a = mul(a,a) ; 
    }
    return res ; 
}
int fac[M],inv[M],S ; 
inline void prework(void){
    fac[0] = inv[0] = 1 ;
    for(int i = 1 ; i <= N ; i++) fac[i] = mul(fac[i-1],i) ;
    for(int i = 1 ; i <= N ; i++) inv[i] = power(fac[i],mod-2) ;
}
inline void Mul(int *a,int *b,int *c,int len){
    for(int i = 0 ; i <= S ; i++)
        for(int j = 0 ; i+j <= S && j < len ; j++)
           c[i+j] = add(c[i+j],sub(mod,mul(a[i],b[j]))) ; 
}
inline void Plus(int *a,int *b){
    for(int i = 0 ; i <= S ; i++) b[i] = add(b[i],a[i]) ;
}
int n,a[M],b[M],c[M],f[M][M],g[M][M],Inv,ans ; 
int main(){
    //freopen("in.txt","r",stdin) ; 
    prework() ; 
    cin >> n ;
    for(int i = 1 ; i <= n ; i++) scanf("%d%d",&a[i],&b[i]),S += a[i] ;
    Inv = power(S,mod-2) ; f[0][0] = 1 ;
    for(int i = 1 ; i <= n ; i++){
        memcpy(g,f,sizeof g) ;
        memset(f,0,sizeof f) ;
        c[0] = 1 ; 
        for(int j = 1 ; j < b[i] ; j++)
            c[j] = mul(c[j-1],mul(a[i],Inv)) ; 
        for(int j = 1 ; j < b[i] ; j++)
            c[j] = mul(c[j],inv[j]) ;
        for(int j = 0 ; j <= S-a[i] ; j++)
            Mul(g[j],c,f[j],b[i]),Plus(g[j],f[j+a[i]]) ; 
    }
    for(int d = 0 ; d < S ; d++){
        int e = mul(d,Inv),L = power(sub(1,e),mod-2) ;
        ans = add(ans,mul(L,f[d][0])) ;
        for(int i = 1 ; i <= S ; i++){
            L = mul(power(sub(1,e),mod-2),mul(i,L)) ;
            ans = add(ans,mul(L,f[d][i])) ; 
        }
    }
    cout << sub(mod,ans) << endl ; 
    return 0 ; 
}