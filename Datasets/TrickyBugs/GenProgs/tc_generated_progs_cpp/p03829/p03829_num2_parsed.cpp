#include <stdio.h>
int main(){
	int n,i;
	long long a,b,xb,xa,ans=0;  //changed a, b to long long
	scanf("%d%lld%lld",&n,&a,&b); //changed a, b to %lld
	for(i=0;i<n;i++){
		if(i==0)
		scanf("%lld",&xa); //changed xa to %lld
		else{
		xb=xa;
		scanf("%lld",&xa); //changed xa to %lld
		if((xa-xb)*a<b)
		ans+=(xa-xb)*a;
		else
		ans+=b;
	    }
	}	
    printf("%lld",ans); //changed ans to %lld
    return 0;
 }
