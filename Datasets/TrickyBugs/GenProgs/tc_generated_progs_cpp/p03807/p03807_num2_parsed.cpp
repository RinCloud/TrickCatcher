#include <bits/stdc++.h>

using namespace std;

int main() {
    int N, Xor = 0, A;
    scanf("%d", &N);
    while(N--) {
        scanf("%d", &A);
        Xor ^= (A & 1);
    }
    puts(Xor == 0 ? "YES" : "NO");
    return 0;
}