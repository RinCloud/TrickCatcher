#include <iostream>
using namespace std;

const long long MOD = 1000000007;

long long countPairs(long long N) {
    long long result = 0;
    for (int u = 0; u <= N; u++) {
        for (int v = u; v <= N; v++) {
            long long a = (u + v) / 2;
            long long b = v - a;
            if ((a ^ b) == u) {
                result++;
            }
        }
    }
    return result % MOD;
}

int main() {
    long long N;
    cin >> N;
    
    long long ans = countPairs(N);
    cout << ans << endl;
    
    return 0;
}