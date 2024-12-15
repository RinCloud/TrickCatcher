#include <iostream>
using namespace std;

int findNumDigits(int N, int K) {
    int numDigits = 0;
    while (N > 0) {
        N /= K;
        numDigits++;
    }
    return numDigits;
}

int main() {
    int N, K;
    cin >> N >> K;

    int numDigits = findNumDigits(N, K);
    cout << numDigits << endl;

    return 0;
}