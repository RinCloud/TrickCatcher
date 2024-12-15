#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef long long ll;

// Function to calculate the greatest common divisor (GCD) of two numbers
ll gcd(ll a, ll b) {
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

// Function to calculate the number of divisors of a given number
ll countDivisors(ll n) {
    ll cnt = 0;
    for (ll i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            // If i is a divisor of n, increase the count by 1
            cnt++;
            // If i is not the square root of n, then the other divisor is n/i
            if (i * i != n)
                cnt++;
        }
    }
    return cnt;
}

int main() {
    ll A, B;
    cin >> A >> B;

    // Calculate the greatest common divisor of A and B
    ll gcdAB = gcd(A, B);

    // Calculate the number of divisors of the GCD
    ll maxDivisors = countDivisors(gcdAB);

    cout << maxDivisors << endl;

    return 0;
}