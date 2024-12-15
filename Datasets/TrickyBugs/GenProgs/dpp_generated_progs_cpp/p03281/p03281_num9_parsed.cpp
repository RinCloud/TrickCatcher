#include <iostream>
#include <cmath>

using namespace std;

bool isOdd(int num) {
    return num % 2 != 0;
}

int countDivisors(int num) {
    int count = 0;
    for (int i = 1; i <= sqrt(num); ++i) {
        if (num % i == 0) {
            if (num / i == i) {
                count += 1;
            } else {
                count += 2;
            }
        }
    }
    return count;
}

int main() {
    int N;
    cin >> N;

    int count = 0;
    for (int i = 1; i <= N; ++i) {
        if (isOdd(i) && countDivisors(i) == 8) {
            count += 1;
        }
    }

    cout << count;

    return 0;
}