#include <iostream>
using namespace std;

const int MOD = 1000000007;

int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact = (fact * i) % MOD;
    }
    return fact;
}

int main() {
    int N;
    cin >> N;

    int divisors = 1;
    for (int i = 2; i <= N; i++) {
        int count = 0;
        while (N % i == 0) {
            count++;
            N /= i;
        }
        divisors = (divisors * (count + 1)) % MOD;
    }

    cout << factorial(N) * divisors % MOD << endl;

    return 0;
}