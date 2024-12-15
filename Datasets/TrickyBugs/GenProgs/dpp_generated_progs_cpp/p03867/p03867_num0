#include <iostream>
using namespace std;

const int MOD = 1000000007;

long long power(long long x, long long y) {
    if (y == 0) return 1;
    if (y == 1) return x;
    long long half = power(x, y/2);
    long long result = (half * half) % MOD;
    if (y % 2 != 0) result = (result * x) % MOD;
    return result;
}

int main() {
    int N, K;
    cin >> N >> K;
    
    if (N == 1) {
        cout << K << endl;
        return 0;
    }
    
    if (N == 2) {
        cout << (K * (K - 1)) % MOD << endl;
        return 0;
    }
    
    cout << (K * (K - 1) % MOD * power(K - 2, N - 2) % MOD) << endl;
    
    return 0;
}