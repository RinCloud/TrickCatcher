#include <iostream>
#include <vector>
using namespace std;

const int MOD = 998244353;

// Function to calculate gcd of two numbers
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

// Function to calculate lcm of two numbers
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
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