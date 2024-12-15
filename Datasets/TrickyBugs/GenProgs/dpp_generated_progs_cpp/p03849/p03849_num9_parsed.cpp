#include <iostream>
using namespace std;

const int MOD = 1000000007;

long long power(long long base, long long exp) {
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
    long long N;
    cin >> N;

    long long ans = (((2 * power(2, N)) % MOD) + ((3 * power(4, N-1)) % MOD)) % MOD;
    cout << ans << endl;
    
    return 0;
}