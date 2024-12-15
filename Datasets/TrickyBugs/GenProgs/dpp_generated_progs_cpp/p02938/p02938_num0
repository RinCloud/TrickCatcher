#include <iostream>
#include <vector>
#include <cmath>

#define MOD (1000000007)

using namespace std;

long long power(long long x, long long y) {
    long long result = 1;
    while (y > 0) {
        if (y & 1) {
            result = (result * x) % MOD;
        }
        x = (x * x) % MOD;
        y >>= 1;
    }
    return result;
}

long long countPairs(long long L, long long R) {
    long long count = 0;
    for (int i = 62; i >= 0; i--) {
        if (((R >> i) & 1) && !((L >> i) & 1)) {
            count += power(2, i);
        }
    }
    return count;
}

int main() {
    long long L, R;
    cin >> L >> R;
    long long answer = countPairs(L, R);
    cout << answer << endl;
    return 0;
}