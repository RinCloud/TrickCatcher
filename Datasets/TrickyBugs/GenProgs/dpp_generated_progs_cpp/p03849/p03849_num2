#include <iostream>
using namespace std;

const long long MOD = 1000000007;

long long countPairs(long long N) {
    long long ans = 0;
    for (int u = 0; u <= N; u++) {
        for (int v = 0; v <= N; v++) {
            long long a = (u ^ v);
            long long b = v - a;
            if (a >= 0 && b >= 0 && a + b == v) {
                ans++;
                ans %= MOD;
            }
        }
    }
    return ans;
}

int main() {
    long long N;
    cin >> N;
    cout << countPairs(N) << endl;
    return 0;
}