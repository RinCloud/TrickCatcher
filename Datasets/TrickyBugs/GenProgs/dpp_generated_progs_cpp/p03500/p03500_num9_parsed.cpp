#include <bits/stdc++.h>
#define MOD 1000000007
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    vector<long long> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    
    long long ans = 1;
    int max_bit = 61; // Maximum number of bits required to represent the numbers
    vector<int> cnt(max_bit);
    
    for (int bit = max_bit - 1; bit >= 0; bit--) {
        int num_zeros = 0;

        // Calculate the number of zeros at the current bit position
        for (int i = 0; i < N; i++) {
            if ((A[i] >> bit) & 1) {
                num_zeros += 1;
            }
        }
        
        // Check if it is possible to perform operation B
        if (num_zeros > K) {
            continue;
        }
        
        // Calculate the number of ones at the current bit position
        int num_ones = N - num_zeros;
        
        // Determine the maximum number of ones that can be converted to zeros using operation A
        int max_ones = min(num_ones, K - num_zeros);
        
        // Update the count at the current bit position
        cnt[bit] = max_ones + 1;
        
        // Update the remaining operations available
        K -= max_ones;
        
        // Calculate the number of combinations at the current bit position
        long long combinations = (1LL << bit) % MOD;
        
        // Multiply the answer by the number of combinations at the current bit position
        ans = (ans * combinations) % MOD;
    }
    
    cout << ans << endl;
    
    return 0;
}