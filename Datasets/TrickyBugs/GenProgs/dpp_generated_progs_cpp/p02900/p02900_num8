#include <iostream>
#include <cmath>

using namespace std;

// Function to calculate the greatest common divisor (GCD)
long long calculateGCD(long long a, long long b) {
    if (b == 0) {
        return a;
    }

    return calculateGCD(b, a % b);
}

// Function to count the number of divisors
long long countDivisors(long long n) {
    long long result = 0;
    for (long long i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            if (n / i == i) {
                result++;
            } else {
                result += 2;
            }
        }
    }
    return result;
}

int main() {
    long long a, b;
    cin >> a >> b;

    long long gcd = calculateGCD(a, b);

    long long divisors = countDivisors(gcd);

    cout << divisors << endl;

    return 0;
}