#include<bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

int main() {
    int n, m, k;
    cin >> n >> m >> k;
    
    long long ans = 0;
    
    // iterate over all possible squares where we can place the pieces
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=m; j++) {
            // calculate the contribution of the current square to the answer
            // by considering all pairs of squares
            for(int x=1; x<=n; x++) {
                for(int y=1; y<=m; y++) {
                    // only consider pairs of squares where the pieces can be placed on them
                    if(x != i || y != j) {
                        // calculate the cost of placing pieces on the current pair of squares
                        int cost = abs(i - x) + abs(j - y);
                        // add the cost to the answer
                        ans = (ans + cost) % MOD;
                    }
                }
            }
        }
    }
    
    // multiply the answer by the number of possible arrangements of the pieces
    // which is (n * m) choose k
    long long factorial[200005];
    factorial[0] = factorial[1] = 1;
    for(int i=2; i<=200000; i++) {
        factorial[i] = (factorial[i-1] * i) % MOD;
    }
    long long inv_factorial_k = 1;
    for(int i=1; i<=k; i++) {
        inv_factorial_k = (inv_factorial_k * i) % MOD;
    }
    long long inv_factorial_n_m_k = 1;
    for(int i=1; i<=(n * m - k); i++) {
        inv_factorial_n_m_k = (inv_factorial_n_m_k * i) % MOD;
    }
    long long num_arrangements = (factorial[n * m] * inv_factorial_k) % MOD;
    num_arrangements = (num_arrangements * inv_factorial_n_m_k) % MOD;
    
    // multiply the answer by the number of possible arrangements and take modulo
    ans = (ans * num_arrangements) % MOD;
    
    cout << ans << endl;
    
    return 0;
}