#include<stdio.h>
int main(void)
{
    int n, k, h, i, cnt;
    scanf("%d %d", &n, &k);
    cnt = 0; // Initialize the cnt variable to 0
    for(i = 0; i < n; i++){
        scanf("%d", &h);
        if(h >= k) cnt++;
    }
    printf("%d\n", cnt);
    return 0;
}