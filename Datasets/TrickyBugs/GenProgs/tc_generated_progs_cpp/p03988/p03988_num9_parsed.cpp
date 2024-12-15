#include <cstdio>
#include <iostream>
using namespace std;

int n, a[105], minn = 1, maxx, cnt[105];

int main() {
    scanf("%d", &n);
    for(int i = 1; i <= n; ++i) {
        scanf("%d", &a[i]);
        maxx = max(maxx, a[i]);
        minn = min(minn, a[i]);
        ++cnt[a[i]];
    }
    int sum = 0;
    for(int i = 1; i <= n; i++) {
        sum += a[i];
    }
    if(sum != 2 * (n - 1)){
        puts("Impossible");
        return 0;
    }
    if(2 * minn > maxx) {
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
        if(cnt[i] < 1) {
            puts("Impossible");
            return 0;
        }
    }
    puts("Possible");
    return 0;
}
