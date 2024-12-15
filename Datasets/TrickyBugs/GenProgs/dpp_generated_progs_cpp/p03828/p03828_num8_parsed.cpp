#include <iostream>
#define MOD 1000000007

using namespace std;

int main() {
    int N;
    cin >> N;
    
    // Calculate the factorial of N
    long long factorial = 1;
    for (int i = 1; i <= N; i++) {
        factorial = (factorial * i) % MOD;
    }
    
    // Calculate the number of divisors
    int divisors = 0;
    for (int i = 1; i * i <= factorial; i++) {
        if (factorial % i == 0) {
            // If i is a divisor, increment the count
            divisors++;
            // If i is not the square root of the factorial, count its pair as well
            if ((factorial / i) != i) {
                divisors++;
            }
        }
    }
    
    // Print the result modulo 10^9+7
    cout << divisors % MOD << endl;
    
    return 0;
}