#include <iostream>
#include <vector>

#define MOD 1000000007

using namespace std;

int main() {
    // Read input
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    // Calculate XOR sum
    long long sum = 0;
    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            sum += A[i] ^ A[j];
        }
    }

    // Output the result modulo (10^9+7)
    cout << sum % MOD << endl;

    return 0;
}