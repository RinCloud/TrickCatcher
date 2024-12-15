#include <bits/stdc++.h>

using namespace std;

int main() {
    int N, Xor, A;
    scanf("%d", &N);
    while(N--) {
        scanf("%d", &A);
        Xor ^= (A & 1);
    }
    puts(!Xor ? "YES" : "NO");
    return 0;
}