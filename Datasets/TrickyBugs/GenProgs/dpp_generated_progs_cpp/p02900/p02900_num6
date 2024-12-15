#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to calculate the greatest common divisor (GCD)
long long gcd(long long a, long long b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

// Function to calculate all the divisors of a number
vector<long long> getDivisors(long long n) {
    vector<long long> divisors;
    for (long long i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            divisors.push_back(i);
            if (n / i != i) {
                divisors.push_back(n / i);
            }
        }
    }
    sort(divisors.begin(), divisors.end());
    return divisors;
}

int main() {
    // Read input values of A and B
    long long A, B;
    cin >> A >> B;

    // Calculate the GCD of A and B
    long long G = gcd(A, B);

    // Get the divisors of the GCD
    vector<long long> divisors = getDivisors(G);

    // Initialize the count of chosen divisors
    int count = 0;

    // Iterate through the divisors and check if any two are coprime
    for (int i = 0; i < divisors.size(); i++) {
        bool isCoprime = true;
        for (int j = i + 1; j < divisors.size(); j++) {
            if (gcd(divisors[i], divisors[j]) != 1) {
                isCoprime = false;
                break;
            }
        }
        if (isCoprime) {
            count++;
        }
    }

    // Print the maximum number of divisors that can be chosen
    cout << count << endl;

    return 0;
}