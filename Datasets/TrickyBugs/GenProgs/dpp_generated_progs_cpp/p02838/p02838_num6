#include <iostream>
#include <vector>
using namespace std;

const int MOD = 1e9 + 7;

int main() {
    int N;
    cin >> N;

    vector<long long> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    long long sum = 0;
    for (int i = 0; i < 60; i++) {
        long long countOnes = 0;
        for (int j = 0; j < N; j++) {
            if (A[j] & (1LL << i)) {  // Check if i-th bit is set
                countOnes++;
            }
        }
        long long countZeros = N - countOnes;
        long long xorSum = (countZeros * countOnes) % MOD;  // Calculate XOR sum for i-th bit
        xorSum = (xorSum * (1LL << i)) % MOD;  // Multiply by 2^i
        sum = (sum + xorSum) % MOD;
    }

    cout << sum << endl;

    return 0;
}