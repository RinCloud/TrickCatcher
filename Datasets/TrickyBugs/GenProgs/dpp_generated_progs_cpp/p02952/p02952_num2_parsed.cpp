#include <iostream>
using namespace std;

int countOddDigits(int n) {
    int count = 0;
    for (int i = 1; i <= n; i++) {
        int numDigits = 0;
        int temp = i;
        while (temp > 0) {
            temp /= 10;
            numDigits++;
        }
        if (numDigits % 2 != 0)
            count++;
    }
    return count;
}

int main() {
    int N;
    cin >> N;
    int result = countOddDigits(N);
    cout << result << endl;
    return 0;
}