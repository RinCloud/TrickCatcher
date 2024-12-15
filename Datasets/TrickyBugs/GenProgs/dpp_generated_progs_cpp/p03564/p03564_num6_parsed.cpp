#include <iostream>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    if (N % 2 == 0) {
        cout << (N / 2) * (N * K + 2) << endl;
    }
    else {
        cout << ((N + 1) / 2) * (N * K + 2) - K << endl;
    }

    return 0;
}