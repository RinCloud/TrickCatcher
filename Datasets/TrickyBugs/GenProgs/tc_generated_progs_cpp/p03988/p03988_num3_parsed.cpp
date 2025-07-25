#include <cstdio>
#include <iostream>
using namespace std;

const int MAX_N = 105;

int n, a[MAX_N], minn = 1e9, maxx = 0, cnt[MAX_N];

int main() {
    scanf("%d", &n);
    for(int i = 1; i <= n; ++i) {
        scanf("%d", &a[i]);
        maxx = max(maxx, a[i]);
        minn = min(minn, a[i]);
        ++cnt[a[i]];
    }
    
    if(minn <= (maxx + 1) / 2 || cnt[maxx] <= 1) {
        puts("Impossible");
        return 0;
    }
    
    if(maxx % 2 == 1 && cnt[minn] != 2) {
        puts("Impossible");
        return 0;
    }
    
    if(maxx % 2 == 0 && cnt[minn] != 1) {
        puts("Impossible");
        return 0;
    }
    
    for(int i = minn + 1; i < maxx; ++i) {
        if(cnt[i] < 2) {
            puts("Impossible");
            return 0;
        }
    }
    
    puts("Possible");
    
    return 0;
}
