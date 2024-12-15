#include <iostream>
#include <vector>

using namespace std;

int main() {
    int K, N;
    cin >> K >> N;

    // Calculate X, the total number of sequences listed in FEIS
    long long X = 1;
    for (int i = 0; i < N; i++) {
        X *= K;
    }

    // Calculate the (X/2)-th smallest sequence
    vector<int> sequence(N);
    long long middle = (X + 1) / 2; // Rounded up to the nearest integer

    for (int i = 0; i < N; i++) {
        sequence[i] = (middle - 1) % K + 1;
        middle = (middle - 1) / K;
    }

    // Print the sequence
    for (int i = 0; i < N; i++) {
        cout << sequence[i] << " ";
    }

    return 0;
}