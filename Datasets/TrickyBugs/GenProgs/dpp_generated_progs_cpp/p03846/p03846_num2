#include <iostream>
#include <vector>

using namespace std;

const int MOD = 1000000007;

int main() {
    int N;
    cin >> N;
    
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    
    vector<long long> fact(N+1, 1);
    for (int i = 1; i <= N; i++) {
        fact[i] = (fact[i-1] * i) % MOD;
    }
    
    vector<int> cnt(N+1, 0);
    for (int i = 0; i < N; i++) {
        cnt[A[i]]++;
    }
    
    vector<long long> inv(N+1);
    for (int i = 1; i <= N; i++) {
        inv[i] = 1;
        for (int j = 1; j <= i-1; j++) {
            inv[i] = (inv[i] * (cnt[j] * j) % MOD) % MOD;
        }
    }
    
    long long result = fact[N];
    for (int i = 1; i <= N; i++) {
        result = (result * inv[i]) % MOD;
    }
    
    cout << result << endl;
    
    return 0;
}