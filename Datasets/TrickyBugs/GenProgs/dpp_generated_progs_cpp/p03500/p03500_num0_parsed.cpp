#include <iostream>
#include <vector>
using namespace std;

const int MOD = 1000000007;

int main() {
    int N, K;
    cin >> N >> K;
    
    vector<long long> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    
    int max_bits = 0;
    for (int i = 0; i < N; i++) {
        max_bits = max(max_bits, __builtin_popcountll(A[i]));
    }
    
    long long count[65][2] = {0};
    for (int i = 0; i < N; i++) {
        for (int j = 0; j <= 60; j++) {
            if ((A[i] >> j) & 1LL) {
                count[60 - j][1]++;
            } else {
                count[60 - j][0]++;
            }
        }
    }
    
    long long ans = 0;
    for (int i = 0; i <= 60; i++) {
        if (((K >> (60 - i)) & 1LL) == 0) {
            continue;
        }
        
        long long bit_count = count[i][0] * (1LL << (60 - i));
        for (int j = 0; j < i; j++) {
            if (((K >> (60 - j)) & 1LL) == 0) {
                bit_count += count[j][1] * (1LL << (60 - i));
            }
        }
        
        ans += bit_count % MOD;
        ans %= MOD;
    }
    
    cout << ans << endl;
    
    return 0;
}