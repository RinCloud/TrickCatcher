#include <bits/stdc++.h>
using namespace std;

const long long MOD = 1000000007;

int main() {
    long long n, sum = 0;
    cin >> n;
    vector<long long> v(n);
    
    for (long long i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    long long a = 0;
    for (long long j = 0; j < n - 1; j++) {
        a += v[j];
        a %= MOD;
        sum += (v[j + 1] * a) % MOD;
        sum %= MOD;
    }
    
    cout << sum;
    return 0;
}
