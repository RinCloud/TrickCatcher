#include <iostream>
using namespace std;

int main() {
    // Read the input values for N, X, and M
    int N, X, M;
    cin >> N >> X >> M;

    // Calculate the sequence A
    int A = X;
    int sum = A;
    for (int i = 2; i <= N; i++) {
        A = (A * A) % M; // Apply the recurrence relation
        sum += A;
    }

    // Print the sum
    cout << sum << endl;

    return 0;
}