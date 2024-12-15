#include <iostream>
#include <cmath>

using namespace std;

// Function to check if a number is prime
bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }

    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    long long N;
    cin >> N;

    int count = 0;
    long long current = N;

    // Iterate until N is not 1
    while (current != 1) {
        // Find the largest prime power factor of current
        int z = 1;
        for (int i = 2; i <= sqrt(current); i++) {
            if (isPrime(i) && current % (i * i) == 0) {
                z = i * i;
            }
        }

        // Update current and increment count
        current /= z;
        count++;
    }

    cout << count << endl;

    return 0;
}