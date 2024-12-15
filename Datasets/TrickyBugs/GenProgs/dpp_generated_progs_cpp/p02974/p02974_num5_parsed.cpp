#include <iostream>
#include <vector>

using namespace std;

const long long MOD = 1000000007;

// Function to calculate factorial of a number
long long factorial(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact = (fact * i) % MOD;
    }
    return fact;
}

// Function to calculate combination nCr
long long combination(int n, int r) {
    vector<vector<long long>> C(n + 1, vector<long long>(r + 1, 0));
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= min(i, r); j++) {
            if (j == 0 || j == i) {
                C[i][j] = 1;
            } else {
                C[i][j] = (C[i - 1][j - 1] + C[i - 1][j]) % MOD;
            }
        }
    }
    return C[n][r];
}

// Function to calculate number of permutations of oddness k
long long permutationsOfOddness(int n, int k) {
    // If oddness k is greater than maximum possible oddness or k is odd while n is even, return 0
    if (k > n * n || (k % 2 != n % 2)) {
        return 0;
    }
    
    // Calculate number of permutations with oddness k
    long long ans = 0;
    for (int i = 0; i <= n; i += 2) {
        int j = k - i;
        if (j % 2 == 0 && j >= 0 && j <= n) {
            long long c1 = combination(n, i);
            long long c2 = combination(n, j);
            long long fact = factorial(n - i);
            ans = (ans + (c1 * c2 * fact) % MOD) % MOD;
        }
    }
    return ans;
}

int main() {
    int n, k;
    cin >> n >> k;
    long long result = permutationsOfOddness(n, k);
    cout << result << endl;
    
    return 0;
}