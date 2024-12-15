#include <stdio.h>

int main(void)
{
	int n,a[101],i,c=0;
	scanf("%d",&n);
	for(i=0; i<n; i++){
		scanf("%d",&a[i]);
	}
	
	i=0;
	
	while(i<n-1){  // Fixed the loop condition to prevent accessing index out of boundary
		if(a[i]==a[i+1]){
			c=c+1;	i=i+2;
		}
		else{
			i=i+1;  // Fixed else block to prevent infinite loop
		}
	}
		printf("%d\n",c);
	return 0;
}
