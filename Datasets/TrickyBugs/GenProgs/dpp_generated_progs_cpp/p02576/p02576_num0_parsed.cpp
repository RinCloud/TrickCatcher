#include <iostream>

using namespace std;

int main() {
    int N, X, T;
    cin >> N >> X >> T;

    int batches = (N + X - 1) / X;
    int totalTime = batches * T;

    cout << totalTime << endl;

    return 0;
}