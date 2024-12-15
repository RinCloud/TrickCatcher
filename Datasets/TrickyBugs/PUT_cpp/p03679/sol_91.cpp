#include<stdio.h>
int main(void)
{
	int X,A,B;
	scanf("%d%d%d",&X,&A,&B);
	if(B<=X) printf("delicious\n");
	if(X+A>=B&&B>A)printf("safe\n");
	if(X+A<B) printf("dangerous\n");
	return 0;
}