#include <iostream>
using namespace std;

const int MOD = 1000000007;

long long fastPow(long long base, long long exp) {
    long long result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) {
            result = (result * base) % MOD;
        }
        base = (base * base) % MOD;
        exp /= 2;
    }
    return result;
}

int main() {
    int N, K;
    cin >> N >> K;
    
    if (N == 1) {
        cout << K << endl;
    } else if (N == 2) {
        cout << K * (K - 1) % MOD << endl;
    } else {
        cout << K * (K - 1) % MOD * fastPow(K - 2, N - 2) % MOD << endl;
    }
    
    return 0;
}