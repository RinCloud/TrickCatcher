#include <iostream>
using namespace std;

int getSumOfDigits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    int N;
    cin >> N;

    int minimumSum = INT_MAX;
    for (int i = 1; i <= N / 2; i++) {
        int A = i;
        int B = N - i;
        int sumOfDigits = getSumOfDigits(A) + getSumOfDigits(B);
        minimumSum = min(minimumSum, sumOfDigits);
    }
    cout << minimumSum << endl;
    return 0;
}
