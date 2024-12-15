#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int answer = 1;
    int maxDivisible = 0;

    for (int i = 2; i <= N; i++) {
        int temp = i;
        int count = 0;

        while (temp % 2 == 0) {
            temp /= 2;
            count++;
        }

        if (count > maxDivisible) {
            maxDivisible = count;
            answer = i;
        }
    }

    cout << answer << endl;

    return 0;
}