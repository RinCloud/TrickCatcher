#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    int value = 1;

    for (int i = 0; i < N; i++) {
        int operationA = value * 2;
        int operationB = value + K;

        if (operationA <= operationB) {
            value = operationA;
        } else {
            value = operationB;
        }
    }

    cout << value;

    return 0;
}