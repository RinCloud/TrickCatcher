#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;

// Function to compute the factorial of a number
ll factorial(int n) {
    ll fact = 1;
    for (int i = 2; i <= n; i++) {
        fact = (fact * i) % MOD;
    }
    return fact;
}

// Function to check if a number is a divisor of N!
bool isDivisor(ll n, int num) {
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            if (i == num || n / i == num) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    int N;
    cin >> N;

    // Calculating the factorial of N
    ll factN = factorial(N);

    // Counting the number of divisors of N!
    int divisors = 0;
    for (int i = 1; i <= N; i++) {
        if (isDivisor(factN, i)) {
            divisors++;
        }
    }

    cout << divisors << endl;

    return 0;
}