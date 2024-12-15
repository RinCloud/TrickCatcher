#include <stdio.h>

int N,T,c,t,C=1001,Flag=0;

int main(void){
	scanf("%d %d",&N,&T);
	for(;N>0;N--){
		scanf("%d %d",&c,&t);
		if(t<=T && C>c){
			C=c;
			Flag=1;
		}
	}
	if(Flag)printf("%d",C);
	else printf("TLE");
	return 0;
}