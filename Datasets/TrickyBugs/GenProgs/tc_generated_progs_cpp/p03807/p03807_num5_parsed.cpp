#include <bits/stdc++.h>

using namespace std;

int main() {
    int N, Xor = 0, A;
    scanf("%d", &N);
    while(N--) {
        scanf("%d", &A);
        Xor ^= A;
    }
    puts(Xor ? "NO" : "YES");
    return 0;
}
