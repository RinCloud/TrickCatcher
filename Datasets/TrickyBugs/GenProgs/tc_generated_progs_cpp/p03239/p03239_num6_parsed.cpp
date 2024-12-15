#include <stdio.h>
#include <limits.h>

int main(void){
	int N,T,c,t,C=INT_MAX,Flag=0;
	scanf("%d %d",&N,&T);
	for(int i = 0; i < N; i++){
		scanf("%d %d",&c,&t);
		if(t <= T && c < C){
			C = c;
			Flag = 1;
		}
	}
	if(Flag) printf("%d",C);
	else printf("TLE");
	return 0;
}