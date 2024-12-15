#include <stdio.h>

int main(void) {
    int n, a[101], i, c = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    i = 0;

    while (i < n - 1) { // <-- fix: should iterate until n-1 to avoid accessing out of bounds
        if (a[i] == a[i + 1]) {
            c = c + 1; 
            i = i + 2;
        } else {
            i = i + 1;
        }
    }
    
    printf("%d\n", c);
    return 0;
}
