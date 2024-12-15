#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

const int MAX_N = 100;

int main() {
    int N;
    cin >> N;

    // Calculating prime factorization of N!
    vector<int> factorization(MAX_N + 1, 0);
    for (int i = 2; i <= N; i++) {
        int num = i;
        for (int j = 2; j <= sqrt(num); j++) {
            while (num % j == 0) {
                factorization[j]++;
                num /= j;
            }
        }
        if (num > 1) {
            factorization[num]++;
        }
    }

    // Calculating the number of divisors with highest power
    int count = 0;
    for (int i = 2; i <= MAX_N; i++) {
        if (factorization[i] >= 74) {
            count++;
        }
    }

    // Calculating the number of Shichi-Go numbers
    int shichiGoCount = 0;
    for (int i = 2; i <= MAX_N; i++) {
        for (int j = i + 1; j <= MAX_N; j++) {
            if (factorization[i] >= 24 && factorization[j] >= 2) {
                shichiGoCount++;
            }
            if (factorization[i] >= 14 && factorization[j] >= 4) {
                shichiGoCount++;
            }
            if (factorization[i] >= 4 && factorization[j] >= 14) {
                shichiGoCount++;
            }
            if (factorization[i] >= 2 && factorization[j] >= 24) {
                shichiGoCount++;
            }
        }
    }

    // Adding the number of divisors with highest power
    shichiGoCount += count;

    cout << shichiGoCount << endl;

    return 0;
}