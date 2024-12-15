#include <bits/stdc++.h>
using namespace std;

const int MOD = 998244353;

int main() {
    string S;
    cin >> S;
    int N = S.size();

    // Count the number of zeros and ones in the string
    int zeros = count(S.begin(), S.end(), '0');
    int ones = N - zeros;

    // Calculate the result using the formula
    long long result = 1;
    for (int i = 1; i <= N; i++) {
        result = (result * i) % MOD;
    }
    for (int i = 1; i <= zeros; i++) {
        result = (result * i) % MOD;
    }
    for (int i = 1; i <= ones; i++) {
        result = (result * i) % MOD;
    }

    cout << result << endl;

    return 0;
}