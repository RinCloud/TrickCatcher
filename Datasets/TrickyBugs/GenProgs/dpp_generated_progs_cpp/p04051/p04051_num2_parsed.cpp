#include <iostream>
#include <vector>
#include <algorithm>

typedef long long ll;
const int MOD = 1e9 + 7;

int main() {
    int N;
    std::cin >> N;
    std::vector<ll> A(N), B(N);
    
    for (int i = 0; i < N; i++) {
        std::cin >> A[i] >> B[i];
    }
    
    ll ans = 0;
    std::vector<ll> preA(N+1, 0), preB(N+1, 0);
    
    for (int i = 0; i < N; i++) {
        ans += (A[i] + B[i]) % MOD;
        ans %= MOD;
        preA[i+1] = preA[i] + A[i];
        preA[i+1] %= MOD;
        preB[i+1] = preB[i] + B[i];
        preB[i+1] %= MOD;
    }
    
    ll total = 0;
    
    for (int i = 0; i < N; i++) {
        total += B[i];
        total %= MOD;
    }
    
    ll result = 0;
    
    for (int i = 0; i < N; i++) {
        ll cur = preA[i+1] + B[i];
        cur %= MOD;
        cur *= total;
        cur %= MOD;
        cur += preB[i+1] + (ans - A[i] - B[i] + MOD) % MOD;
        cur %= MOD;
        cur *= 2;
        cur %= MOD;
        result += cur;
        result %= MOD;
    }
    
    std::cout << result << std::endl;
    
    return 0;
}