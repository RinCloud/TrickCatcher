#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    // Read the input values
    long long A, B;
    cin >> A >> B;

    // Find the greatest common divisor of A and B
    long long gcd = __gcd(A, B);

    // Count the number of distinct prime factors of gcd
    int count = 0;
    for (long long i = 2; i * i <= gcd; i++) {
        if (gcd % i == 0) {
            count++;
            while (gcd % i == 0) {
                gcd /= i;
            }
        }
    }
    if (gcd > 1) {
        count++;
    }
    
    // Print the result
    cout << count + 1 << endl;

    return 0;
}