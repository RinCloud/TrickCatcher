#include <iostream>
#include <vector>
using namespace std;

// Function to count number of divisors
int countDivisors(int n) {
    int count = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            count++;
        }
    }
    return count;
}

// Function to count numbers with exactly 8 divisors
int countSpecialNumbers(int N) {
    int count = 0;
    for (int i = 1; i <= N; i += 2) {
        if (countDivisors(i) == 8) {
            count++;
        }
    }
    return count;
}

int main() {
    int N;
    cin >> N;

    int result = countSpecialNumbers(N);
    cout << result << endl;

    return 0;
}