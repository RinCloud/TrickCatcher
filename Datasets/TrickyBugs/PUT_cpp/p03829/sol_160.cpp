#include <stdio.h>
int main(){
	int n,i;
	long a,b,xb,xa,ans=0;
	scanf("%d%d%d",&n,&a,&b);
	for(i=0;i<n;i++){
		if(i==0)
		scanf("%d",&xa);
		else{
		xb=xa;
		scanf("%d",&xa);
		if((xa-xb)*a<b)
		ans+=(xa-xb)*a;
		else
		ans+=b;
	    }
	}	
    printf("%ld",ans);
    return 0;
 }