#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int N;
    cin >> N;
    int count = 0;
    for (int i = 1; i <= N; i += 2) {
        int divisors = 0;
        for (int j = 1; j <= sqrt(i); j++) {
            if (i % j == 0) {
                if (i / j == j) { // Check for perfect square
                    divisors += 1;
                } else {
                    divisors += 2;
                }
            }
        }
        if (divisors == 8) {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}