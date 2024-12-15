#include <cstdio>
#include <iostream>
using namespace std;
int n, a[105], cnt[105];
int main() {
    scanf("%d", &n);
    int maxa = 0;
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &a[i]);
        cnt[a[i]]++;
        maxa = max(maxa, a[i]);
    }
    for (int i = 1; i <= n; ++i) {
        if (cnt[a[i]] > 1) {
            puts("Impossible");
            return 0;
        }
    }
    for (int i = 1; i <= maxa; ++i) {
        if (cnt[i] == 0 || cnt[i] > cnt[i - 1]) {
            puts("Impossible");
            return 0;
        }
    }
    puts("Possible");
}