#include"bits/stdc++.h"
using namespace std;
int main(){
    int n,s = 0;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        int divisors = 0;
        for(int j = 1; j * j <= i; j++) {
            if(i % j == 0) {
                divisors += 2;
                if(j * j == i) divisors--;
            }
        }
        if(divisors == 8 && i % 2 == 1) s++;
    }
    cout << s << "\n";
}
