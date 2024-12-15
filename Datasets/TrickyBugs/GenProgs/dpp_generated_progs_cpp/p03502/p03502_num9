#include<iostream>
using namespace std;

int sumOfDigits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

bool isHarshadNumber(int n) {
    int sum = sumOfDigits(n);
    return n % sum == 0;
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