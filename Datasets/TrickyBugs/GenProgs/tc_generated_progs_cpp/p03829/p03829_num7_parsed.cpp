#include <stdio.h>
int main(){
	int n,i;
	long long a,b,xb,xa,ans=0;
	scanf("%d%lld%lld",&n,&a,&b);
	for(i=0;i<n;i++){
		if(i==0)
		scanf("%lld",&xa);
		else{
		xb=xa;
		scanf("%lld",&xa);
		if((xa-xb)*a<b)
		ans+=(xa-xb)*a;
		else
		ans+=b;
	    }
	}	
    printf("%lld",ans);
    return 0;
 }