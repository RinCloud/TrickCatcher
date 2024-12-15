#include <iostream>
#include <vector>

using namespace std;

// Function to compute the total number of sequences
long long computeTotalSequences(int K, int N) {
    // Compute the sum of the arithmetic series K + (K * K) + ... + (K * K * ... * K) = K^K
    long long totalSequences = 1;
    for (int i = 0; i < N; i++) {
        totalSequences *= K;
    }
    return totalSequences;
}

// Function to compute the next lexicographically smallest sequence
vector<int> computeNextSequence(vector<int>& sequence, int K) {
    int N = sequence.size();
    for (int i = N - 1; i >= 0; i--) {
        if (sequence[i] < K) {
            sequence[i]++;
            for (int j = i + 1; j < N; j++) {
                sequence[j] = 1;
            }
            break;
        }
    }
    return sequence;
}

// Function to find the (X/2)-th lexicographically smallest sequence
vector<int> findLexicographicallySmallestSequence(int K, int N) {
    long long totalSequences = computeTotalSequences(K, N);
    int targetSequenceIndex = (totalSequences + 1) / 2;

    // Generate the initial sequence (1, 1, ..., 1)
    vector<int> currentSequence(N, 1);

    // Iterate until we reach the target sequence index
    for (int i = 1; i < targetSequenceIndex; i++) {
        currentSequence = computeNextSequence(currentSequence, K);
    }

    return currentSequence;
}

int main() {
    int K, N;
    cin >> K >> N;

    vector<int> sequence = findLexicographicallySmallestSequence(K, N);

    // Print the sequence with spaces in between
    for (int i = 0; i < N; i++) {
        cout << sequence[i] << " ";
    }
    cout << endl;

    return 0;
}