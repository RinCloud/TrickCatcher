#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to compute the total number of sequences
long long computeTotalSequences(int N, int K) {
    long long result = 0;
    for (int i = 1; i <= N; i++) {
        result += min(K, i);
    }
    return result;
}

// Function to print the (X/2)-th lexicographically smallest sequence
void printSequence(int N, int K) {
    long long X = computeTotalSequences(N, K);
    X = (X + 1) / 2; // Rounded up to the nearest integer
    vector<int> sequence(N);
  
    // Generate the lexicographically smallest sequence
    int remaining = K;
    for (int i = 0; i < N; i++) {
        int digits = min(remaining, N - i);
        sequence[i] = digits;
        remaining -= digits;
    }
  
    // Print the sequence
    for (int i = 0; i < N; i++) {
        cout << sequence[i] << " ";
    }
    cout << endl;
}

int main() {
    int K, N;
    cin >> K >> N;
    printSequence(N, K);
    return 0;
}
