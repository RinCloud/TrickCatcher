#include<bits/stdc++.h>
using namespace std;
#define int long long
const int M=1e9+7;
int a,b,c,fac[900005],fac2[900005],inv[900005],f[900005];
int ksm(int x,int y){
    if (!y)return 1;
    int z=ksm(x,y/2);
    z=(z*z)%M;
    if (y&1)z=(z*x)%M;
    return z;
}
int C(int x,int y){
    if (x<y)return 0;
    return (fac[x]*inv[y]%M*inv[x-y])%M;
}
signed main(){
    scanf("%lld%lld%lld",&a,&b,&c);
    fac[0]=inv[0]=fac2[0]=1;
    for (int i=1;i<900005;i++){
        fac[i]=(fac[i-1]*i)%M;
        fac2[i]=(fac2[i-1]*3)%M;
        inv[i]=ksm(fac[i],M-2);
    }
    a--;
    int now1=0,now2=1,ans=fac2[b+c];
    for (int i=1;i<=b+c;i++){
        now2=(now2*2-C(i-1,b)+M)%M;
        now1=(now1*2+C(i-1,i-c-1))%M;

        ans=(ans+((fac2[b+c-i]*(now2-now1+M)%M*C(a+i,a))%M))%M;
    }
    printf("%lld\n",ans);
}
