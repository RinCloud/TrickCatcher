#include<iostream>
using namespace std;
const int MOD = 1e9+7;

long long power(long long base, long long exp) {
    long long res = 1;
    while(exp > 0) {
        if(exp & 1) {
            res = (res * base) % MOD;
        }
        base = (base * base) % MOD;
        exp >>= 1;
    }
    return res;
}

long long fact(long long n) {
    long long res = 1;
    for(int i = 1; i <= n; i++) {
        res = (res * i) % MOD;
    }
    return res;
}

long long nCr(long long n, long long r) {
    if(r > n) return 0;
    long long numerator = fact(n);
    long long denominator = (fact(r) * fact(n-r)) % MOD;
    long long res = (numerator * power(denominator, MOD-2)) % MOD;
    return res;
}

int main() {
    int n, m, k;
    cin >> n >> m >> k;
    
    long long ans = 0;
    
    if(n == 1 && m == 1)
        ans = k;
    else
        ans = (nCr(n*m-2, k-2) * (n+m) % MOD) % MOD;
        
    cout << ans << endl;
    return 0;
}