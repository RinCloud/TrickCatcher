#include <stdio.h>
#include <algorithm>
int main(){
    long long n;
    scanf("%lld",&n);
    long long l[n],r[n];
    for(int i=0;i<n;i++){
        scanf("%lld%lld",&l[i],&r[i]);
    }
    std::sort(l,l+n);
    std::sort(r,r+n);
    int y=0;
    while(r[y]<l[n-y-1]) y++;
    long long ans=0;
    for(int i=0;i<y;i++){
        ans+=l[n-i-1]-r[i];
    }
    long long g=0;
    if(y!=0) {
        if(l[n-1]<0) g= 0 - l[n-y];
    }
    if(y!=0) {
        if(r[0]>0) g= r[y-1];
    }

    int e=0, f=0;
    if(r[y]<0) e=0 - r[y];
    if(l[n-y-1]>0) f=l[n-y-1];
    if(e>g) g=e;
    if(f>g) g=f;
    ans+=g;
    long long anf = 0;

    e = 0; f = 0;
    if(r[0]<0) e=0-r[0];
    if(l[n-1]>0) f=l[n-1];
    if(e>0) anf=e;
    if(f>e) anf=f;
    if(ans<anf) ans=anf;
    printf("%lld\n",ans*2);
}
