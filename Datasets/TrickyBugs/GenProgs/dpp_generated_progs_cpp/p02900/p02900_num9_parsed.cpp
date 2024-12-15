#include <iostream>
#include <vector>

using namespace std;

// Function to calculate the greatest common divisor (GCD) of two numbers
long long gcd(long long a, long long b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

// Function to calculate the number of positive common divisors of A and B
int countCommonDivisors(long long A, long long B) {
    long long d = gcd(A, B);
    vector<long long> divisors;
    
    // Finding all the divisors of d
    for (long long i = 1; i * i <= d; i++) {
        if (d % i == 0) {
            divisors.push_back(i);
            if (i != d / i) {
                divisors.push_back(d / i);
            }
        }
    }
    
    int n = divisors.size();
    int maxDivisors = 0;
    
    // Loop to check if any two divisors are coprime
    for (int i = 0; i < n; i++) {
        bool coprime = true;
        for (int j = i + 1; j < n; j++) {
            if (gcd(divisors[i], divisors[j]) != 1) {
                coprime = false;
                break;
            }
        }
        if (coprime) {
            // Incrementing the count if the two divisors are coprime
            maxDivisors++;
        }
    }
    
    return maxDivisors;

}

int main() {
    // Read the input values
    long long A, B;
    cin >> A >> B;
    
    // Call the function to calculate the maximum number of divisors
    int result = countCommonDivisors(A, B);
    
    // Print the result
    cout << result << endl;

    return 0;
}