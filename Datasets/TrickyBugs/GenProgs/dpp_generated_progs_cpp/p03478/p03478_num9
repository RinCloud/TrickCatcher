#include <iostream>
#include <string>

using namespace std;

int sumOfDigits(int num) {
    int sum = 0;

    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }

    return sum;
}

int main() {
    int N, A, B;
    cin >> N >> A >> B;

    int totalSum = 0;

    for (int i = 1; i <= N; i++) {
        int digitSum = sumOfDigits(i);

        if (digitSum >= A && digitSum <= B) {
            totalSum += i;
        }
    }

    cout << totalSum << endl;

    return 0;
}