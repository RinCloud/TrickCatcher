#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

const int MOD = 998244353;

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

long long lcm(int a, int b) {
    return (a / gcd(a, b)) * (long long)b;
}

int main() {
    int N;
    cin >> N;
    
    vector<int> sequence(N);
    for (int i = 0; i < N; i++) {
        cin >> sequence[i];
    }
    
    long long sum = 0;
    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            sum = (sum + lcm(sequence[i], sequence[j])) % MOD;
        }
    }
    
    cout << sum << endl;
    
    return 0;
}