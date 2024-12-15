#include <cstdio>
#include <algorithm>
#include <cassert>

#define maxn 105

int n, a[maxn], cnt[maxn], ans[maxn];

int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &a[i]);
    }
    
    for (int i = 1; i <= n; i++) {
        cnt[a[i]]++;
    }
    
    for (int i = 1; i <= n; i++) {
        if (cnt[i] > i) {
            printf("-1\n"); 
            return 0; 
        }
    }

    int prv = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (a[j] == j && a[j] > a[prv]) {
                prv = j;
            }
        }
        
        if (prv == 0) {
            printf("-1\n");
            return 0;
        }
        
        ans[i] = prv;
        for (int j = prv; j < i; j++) {
            a[j] = a[j + 1];
        }
        prv = 0;
    }
        
    for (int i = 1; i <= n; i++) {
        printf("%d\n", ans[i]);
    }
}