#include <stdio.h>
int main(){
    int n,i;
    long a,b,xa, ans = 0;
    scanf("%d%d%d",&n,&a,&b);
    for(i=1;i<=n;i++){
        long xb = xa; // previous town coordinates
        scanf("%ld",&xa); // current town coordinates
        if((xa-xb)*a<b) // if walking is cheaper than teleporting
            ans+=(xa-xb)*a; // increase fatigue level by walking
        else
            ans+=b; // increase fatigue level by teleporting
    }    
    printf("%ld",ans);
    return 0;
}