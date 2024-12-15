#include <iostream>
#include <algorithm>
using namespace std;

int sumOfDigits(int num) {
    int sum = 0;
    while(num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    int N;
    cin >> N;

    // Finding the minimum possible value of the sum of digits
    int minSum = INT_MAX;
    for(int i = 1; i < N; i++) {
        int sumA = sumOfDigits(i);
        int sumB = sumOfDigits(N - i);
        minSum = min(minSum, sumA + sumB);
    }

    cout << minSum << endl;

    return 0;
}