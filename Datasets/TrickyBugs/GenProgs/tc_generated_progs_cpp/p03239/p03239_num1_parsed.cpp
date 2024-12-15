#include <stdio.h>

int N,T,c,t;
int C = 1001; // initialize C with a high value
bool Flag = false;

int main(void){
	scanf("%d %d",&N,&T);
	scanf("%d %d",&c,&t);
	if(t<=T) {
		Flag = true;
		C = c; // update C with the first route that takes not longer than time T
	}
	for(;N>1;N--){
		scanf("%d %d",&c,&t);
		if(t<=T && c<C){
			C=c; // update C with the smallest cost among the routes that takes not longer than time T
			Flag=true;
		}
	}
	if(Flag) printf("%d",C);
	else printf("TLE");
	return 0;
}
