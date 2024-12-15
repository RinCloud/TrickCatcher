#include<iostream>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    int min_value = 1;
    for (int i = 0; i < N; i++) {
        if (min_value * 2 - min_value > min_value + K - min_value) {
            min_value += K;
        } else {
            min_value *= 2;
        }
    }

    cout << min_value << endl;
    return 0;
}