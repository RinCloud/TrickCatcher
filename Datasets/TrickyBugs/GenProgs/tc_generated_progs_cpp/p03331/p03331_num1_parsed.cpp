#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int sum = 0;
    int digitSum = 0;

    if (N % 10 != 0) {
        while (N > 0) {
            digitSum += N % 10;
            N /= 10;
        }
        sum = digitSum;
    } else {
        int A = 1;
        int B = N-1;
        while (B > 0) {
            digitSum += B % 10;
            B /= 10;
        }
        sum = digitSum + 1;
    }
    cout << sum << endl;
}
