#include <iostream>
using namespace std;

const long long MOD = 1000000007;

long long countPairs(int N) {
    long long ans = 0;

    // Iterate through all possible values of u from 0 to N
    for (int u = 0; u <= N; u++) {
        // Determine the maximum possible value of v for the current u
        int maxV = N ^ u;

        // Check if there exist two non-negative integers a and b satisfying a xor b = u
        // and a + b = v for current u and corresponding v
        for (int v = 0; v <= maxV; v++) {
            if ((v ^ u) == (v + u)) {
                ans++;
            }
        }
    }

    return ans % MOD;
}

int main() {
    int N;
    cin >> N;
    cout << countPairs(N) << endl;

    return 0;
}