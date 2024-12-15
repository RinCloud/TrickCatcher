#include <cstdio>
#include <cstring>

int main() {
    int n;
    scanf("%d", &n);

    char s[200005][25];
    for (int i = 0; i < n; i++) {
        scanf("%s", s[i]);
    }

    long long int ans = 0;
    for (int i = 0; i < n; i++) {
        int len = strlen(s[i]);
        bool valid = true;
        for (int j = 0; j < len; j++) {
            char modified[25];
            int idx = 0;
            for (int k = 0; k < len; k++) {
                if (k != j && k != j + 1) {
                    modified[idx++] = s[i][k];
                }
            }
            modified[idx] = '\0';

            for (int l = 0; l < n; l++) {
                if (i != l && strcmp(s[l], modified) == 0) {
                    ans++;
                    break;
                }
            }
        }
    }

    printf("%lld\n", ans);
    return 0;
}
