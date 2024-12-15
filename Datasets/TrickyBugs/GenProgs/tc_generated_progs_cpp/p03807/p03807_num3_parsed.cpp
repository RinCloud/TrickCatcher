#include <bits/stdc++.h>

using namespace std;

int main() {
    int N, Xor=0, A;
    scanf("%d", &N);
    while(N--) {
        scanf("%d", &A);
        Xor ^= (A & 1);
    }
    if(Xor == 0){
        puts("YES");
    }
    else{
        puts("NO");
    }
    return 0;
}