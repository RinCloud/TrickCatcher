#include<iostream>
using namespace std;

int digitSum(long long int n) {
    int sum = 0;
    while(n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    long long int N;
    cin >> N;

    long long int powerOf10 = 1;
    while(powerOf10 * 10 <= N) {
        powerOf10 *= 10;
    }

    int maxDigitSum = 0;
    while(N > 0) {
        int digit = N / powerOf10;
        maxDigitSum += digit;
        N -= digit * powerOf10;
        powerOf10 /= 10;
        maxDigitSum += 9 * powerOf10;
    }

    cout << maxDigitSum << endl;

    return 0;
}