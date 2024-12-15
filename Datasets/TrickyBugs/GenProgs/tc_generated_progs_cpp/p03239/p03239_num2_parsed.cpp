#include <stdio.h>

int N, T, c, t, C, Flag = 0; // Initialize Flag to 0

int main(void){
	scanf("%d %d", &N, &T);
	scanf("%d %d", &C, &t);
	if(t<=T) Flag=1;
	for(;N>1;N--){
		scanf("%d %d", &c, &t);
		if(t<=T && c < C){ // Modify the condition here, change C>c      
			C = c;
			Flag = 1; // Update Flag if a route is found
		}
	}
	if(Flag){
		printf("%d", C);
	} else {
		printf("TLE");
	}
	return 0;
}
