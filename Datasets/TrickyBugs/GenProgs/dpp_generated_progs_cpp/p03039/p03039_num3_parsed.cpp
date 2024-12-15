#include <iostream>
using namespace std;

const int MOD = 1000000007;

long long exp_mod(long long base, long long exp) {
    long long res = 1;
    while (exp > 0) {
        if (exp % 2 == 1) {
            res = (res * base) % MOD;
        }
        base = (base * base) % MOD;
        exp /= 2;
    }
    return res;
}

int main() {
    int N, M, K;
    cin >> N >> M >> K;
    
    long long total_cost = 0;
    
    long long n_c2 = ((N * (N - 1)) % MOD * exp_mod(2, MOD - 2)) % MOD; // n choose 2
    long long m_c2 = ((M * (M - 1)) % MOD * exp_mod(2, MOD - 2)) % MOD; // m choose 2

    long long comb = (n_c2 * m_c2) % MOD;
    long long cost = ((N + M) % MOD * comb) % MOD;
    total_cost = (total_cost + cost) % MOD;
    
    for (int i = 2; i <= K; i++) {
        comb = (comb * ((N * M) % MOD) % MOD) % MOD; // (n*m) choose 2
        cost = ((N + M) % MOD * comb) % MOD;
        total_cost = (total_cost + cost) % MOD;
    }
    
    cout << total_cost << endl;
    
    return 0;
}