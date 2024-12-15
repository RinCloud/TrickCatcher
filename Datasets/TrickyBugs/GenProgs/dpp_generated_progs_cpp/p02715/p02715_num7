#include <iostream>
#define MOD 1000000007
using namespace std;

// Function to calculate gcd of two numbers
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

// Function to calculate power of a number
long long power(long long x, long long y) {
    long long res = 1;
    
    while (y > 0) {
        if (y & 1)
            res = (res * x) % MOD;
        
        y = y >> 1;
        x = (x * x) % MOD;
    }
    
    return res;
}

int main() {
    int n, k;
    cin >> n >> k;
    
    long long ans = 0;
    
    for (int i = 1; i <= k; i++) {
        long long count = power(k / i, n);
        
        for (int j = 2; j * i <= k; j++) {
            count = (count - power(k / (j * i), n) + MOD) % MOD;
        }
        
        ans = (ans + (count * i) % MOD) % MOD;
    }
    
    cout << ans << endl;
    
    return 0;
}