#include <stdio.h>

int main(void)
{
	int n,a[101],i,c=0;
	scanf("%d",&n);
	for(i=0; i<n; i++){
		scanf("%d",&a[i]);
	}
	
	i=0;
	
	while(i<n){
		if(a[i]==a[i+1]){
			c=c+1;	i=i+2;
		}
		if(a[i]!=a[i+1]){
			i=i+1;
		}
	}
		printf("%d\n",c);
	return 0;
}