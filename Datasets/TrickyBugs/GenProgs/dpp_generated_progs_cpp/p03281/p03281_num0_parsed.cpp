#include <iostream>

using namespace std;

bool isOdd(int num) {
    return num % 2 != 0;
}

int countDivisors(int num) {
    int count = 0;
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int N;
    cin >> N;

    int count = 0;
    for (int i = 1; i <= N; i++) {
        if (isOdd(i) && countDivisors(i) == 8) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}