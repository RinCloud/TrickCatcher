#include <stdio.h>
#define INF 1e9

int N,T,c,t,C,Flag;

int main(void){
	scanf("%d %d",&N,&T);
	scanf("%d %d",&C,&t);
	if(t<=T){
	    C = C ;
	    Flag=1;
	    }
	else C = INF;
	for(;N>1;N--){
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
