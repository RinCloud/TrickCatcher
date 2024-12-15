#include<iostream>
#include<vector>

using namespace std;

const int MOD = 998244353;

int main() {
    int N, K, P;
    cin >> N >> K >> P;
    
    // Calculate factorial of N modulo P
    vector<int> fact(N + 1, 1);
    for (int i = 2; i <= N; i++) {
        fact[i] = (1LL * i * fact[i - 1]) % P;
    }
    
    // Calculate inverse factorial of N modulo P
    vector<int> invFact(N + 1, 1);
    for (int i = 2; i <= N; i++) {
        invFact[i] = P - (1LL * (P / i) * invFact[P % i]) % P;
    }
    
    // Calculate number of directed graphs
    int ans = 0;
    for (int i = 0; i <= K; i++) {
        int coef = (1LL * fact[N - i] * invFact[i]) % P;
        if (i % 2 == 0) {
            ans = (ans + coef) % P;
        } else {
            ans = (ans - coef + P) % P;
        }
    }
    
    cout << ans << endl;
    
    return 0;
}