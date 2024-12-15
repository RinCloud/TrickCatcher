#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    int min_value = pow(2, N);
    for (int i = 0; i < N; i++) {
        int value_A = pow(2, i);
        int value_B = K * (N - i);
        int current_value = value_A + value_B;
        if (current_value < min_value) {
            min_value = current_value;
        }
    }

    cout << min_value << endl;

    return 0;
}