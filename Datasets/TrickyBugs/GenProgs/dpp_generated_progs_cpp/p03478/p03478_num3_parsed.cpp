#include <iostream>
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

    int sum = 0;
    for (int i = 1; i <= N; i++) {
        int digitSum = sumOfDigits(i);
        if (digitSum >= A && digitSum <= B) {
            sum += i;
        }
    }

    cout << sum << endl;

    return 0;
}