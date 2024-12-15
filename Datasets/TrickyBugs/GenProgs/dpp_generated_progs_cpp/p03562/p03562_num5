#include <iostream>
#include <vector>
#include <algorithm>
#include <bitset>
using namespace std;

const long long MOD = 998244353;

bitset<4001> convertNumber(long long num) {
    bitset<4001> bits(num);
    return bits;
}

long long countDistinctIntegers(bitset<4001> X, vector<bitset<4001>>& A) {
    int N = A.size();
    
    // Get the maximum number of bits needed
    int numBits = 0;
    for (int i = 0; i < N; i++) {
        numBits = max(numBits, (int)A[i].size());
    }
    
    // Complete the bit representation of X and A with leading zeros
    X <<= (numBits - X.size());
    for (int i = 0; i < N; i++) {
        A[i] <<= (numBits - A[i].size());
    }
    
    vector<int> count(2 * numBits);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < numBits; j++) {
            if (A[i][j]) {
                count[j]++;
            }
        }
    }
    
    vector<bitset<4001>> dp(numBits + 1);
    dp[0][0] = 1;
    
    for (int i = 1; i <= numBits; i++) {
        for (int j = 0; j <= count[i - 1]; j++) {
            for (int k = 0; k < i; k++) {
                dp[i][j + k] = (dp[i][j + k] + dp[i - 1][j]) % MOD;
            }
        }
    }
    
    long long result = 0;
    for (int i = 0; i < numBits; i++) {
        if (X[i]) {
            for (int j = 0; j <= count[i]; j++) {
                result = (result + dp[numBits - 1][j]) % MOD;
            }
        }
    }
    
    return result;
}

int main() {
    int N;
    long long X;
    cin >> N >> X;
    
    vector<bitset<4001>> A(N);
    for (int i = 0; i < N; i++) {
        long long num;
        cin >> num;
        A[i] = convertNumber(num);
    }
    
    bitset<4001> targetNumber = convertNumber(X);
    
    long long ans = countDistinctIntegers(targetNumber, A);
    cout << ans << endl;
    
    return 0;
}