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

bool isHarshadNumber(int num) {
    int fNum = sumOfDigits(num);
    if (num % fNum == 0) {
        return true;
    }
    return false;
}

int main() {
    int N;
    cin >> N;
    if (isHarshadNumber(N)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}