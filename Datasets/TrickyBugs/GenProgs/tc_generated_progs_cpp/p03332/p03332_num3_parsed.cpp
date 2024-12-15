#include <iostream>

const int MOD = 998244353;

long long powMod(long long n, long long p) {
    long long power = 1;
    while(p) {
        if(p%2==1)
            power = (power * n) % MOD;
        n = (n * n) % MOD;
        p /= 2;
    }
    return power;
}

long long C(int n, int nr, long long* v) {
    return v[n] * powMod(v[nr], MOD-2) % MOD * powMod(v[n-nr], MOD-2) % MOD;
}

int main() {
    int n, A, B;
    long long k;
    std::cin >> n >> A >> B >> k;
    
    long long* v = new long long[n+1];
    v[0] = 1;
    for(int i = 1; i <= n; i++)
        v[i] = (v[i-1] * i) % MOD;
    
    long long sol = 0;
    for(int a = 0; a <= n; a++) {
        if(k - A * a >= 0 && (k - A * a) % B == 0) {
            int b = (k - A * a) / B;
            if(b <= n) {
                sol = (sol + C(n, a, v) * C(n, b, v)) % MOD;
            }
        }
    }
    std::cout << sol;
    
    delete[] v;
    return 0;
}
