#include <bits/stdc++.h>
using namespace std;

int main() {
    int h, n;
    scanf("%d %d", &h, &n);
    int a[n], b[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &a[i], &b[i]);
    }
    
    int dp[h+1];
    for (int i = 0; i <= h; i++) {
        dp[i] = 1e9;
    }
    
    dp[0] = 0;
    
    for (int i = 0; i < n; i++) {
        for (int j = a[i]; j <= h; j++) {
            dp[j] = min(dp[j], dp[j - a[i]] + b[i]);
        }
    }
    
    printf("%d", dp[h]);
    
    return 0;
}
