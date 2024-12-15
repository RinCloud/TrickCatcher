#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

const int MOD = 1e9 + 7;

int main() {
    int N;
    cin >> N;
    
    vector<int> A(2*N);
    for (int i = 0; i < 2*N; i++) {
        cin >> A[i];
    }
    
    vector<int> nums;
    for (int i = 1; i <= 2*N; i++) {
        nums.push_back(i);
    }
    
    vector<int> validIndices;
    for (int i = 0; i < 2*N; i++) {
        if (A[i] != -1) {
            validIndices.push_back(i);
        }
    }
    
    int count = validIndices.size();
    
    vector<int> p(count);
    for (int i = 0; i < count; i++) {
        p[i] = A[validIndices[i]] - 1;
    }
    
    vector<int> inv(count);
    for (int i = 0; i < count; i++) {
        inv[p[i]] = i;
    }
    
    vector<int> dp(1 << count);
    dp[0] = 1;
    
    for (int mask = 0; mask < (1 << count); mask++) {
        int pos = __builtin_popcount(mask);
        if (pos >= count) continue;
        
        for (int i = p[pos]; i < N; i++) {
            int newMask = mask | (1 << pos);
            dp[newMask] = (dp[newMask] + dp[mask]) % MOD;
        }
    }
    
    vector<int> fact(count + 1);
    fact[0] = 1;
    for (int i = 1; i <= count; i++) {
        fact[i] = (1LL * fact[i - 1] * i) % MOD;
    }
    
    int result = dp[(1 << count) - 1];
    
    for (int i = 0; i < count; i++) {
        int sz = validIndices[i + 1] - validIndices[i] - 1;
        result = (1LL * result * fact[sz]) % MOD;
    }
    
    cout << result << endl;
    
    return 0;
}