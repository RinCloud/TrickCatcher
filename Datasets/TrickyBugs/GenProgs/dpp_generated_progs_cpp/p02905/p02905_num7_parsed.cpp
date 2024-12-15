#include <iostream>
#include <vector>
#include <algorithm>
#define MOD 998244353

using namespace std;

// Function to calculate LCM of two numbers
int lcm(int a, int b) {
    return (a / __gcd(a, b)) * b;
}

int main() {
    int N;
    cin >> N;
    
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    
    long long sum = 0;
    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            sum += lcm(A[i], A[j]);
            sum %= MOD;
        }
    }
    
    cout << sum << endl;
    
    return 0;
}