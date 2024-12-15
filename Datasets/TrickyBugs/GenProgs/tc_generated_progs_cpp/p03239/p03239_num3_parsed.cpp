#include <stdio.h>

int N,T,c,t,C,Flag;

int main(void){
    scanf("%d %d",&N,&T);
    scanf("%d %d",&C,&t);
    if(t<=T) {
        Flag=1;
        C = c;
    }
    for(;N>1;N--){
        scanf("%d %d",&c,&t);
        if(t<=T && c<C){
            C=c;
            Flag=1;
        }
    }
    if(Flag) printf("%d",C);
    else printf("TLE");
    return 0;
}