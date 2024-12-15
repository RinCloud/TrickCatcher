#include <stdio.h>

int main(void) {
    int X, A, B;
    scanf("%d%d%d", &X, &A, &B);
    
    if (B <= X) {
        printf("delicious\n");
    } else if (B > X && B <= X + A) {
        printf("safe\n");
    } else {
        printf("dangerous\n");
    }
    
    return 0;
}
