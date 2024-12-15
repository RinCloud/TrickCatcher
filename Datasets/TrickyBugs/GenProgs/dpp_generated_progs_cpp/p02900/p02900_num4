#include <iostream>
#include <vector>

// Function to calculate the greatest common divisor of two numbers
long long gcd(long long a, long long b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

// Function to count the number of divisors of a number
int countDivisors(long long num) {
    int count = 0;
    for (long long i = 1; i * i <= num; i++) {
        if (num % i == 0) {
            if (i * i == num) {
                count++;
            } else {
                count += 2;
            }
        }
    }
    return count;
}

// Function to determine the maximum number of divisors that can be chosen
int maxDivisors(long long A, long long B) {
    long long gcdAB = gcd(A, B);
    return countDivisors(gcdAB);
}

int main() {
    // Read the input values
    long long A, B;
    std::cin >> A >> B;

    // Calculate the maximum number of divisors that can be chosen
    int maxDivs = maxDivisors(A, B);

    // Print the result
    std::cout << maxDivs << std::endl;

    return 0;
}