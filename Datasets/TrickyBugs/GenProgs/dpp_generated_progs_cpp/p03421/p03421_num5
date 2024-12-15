#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to determine if there exists a sequence
// with longest increasing subsequence of length A and
// longest decreasing subsequence of length B
vector<int> permuteSequence(int N, int A, int B) {
    // Check if the sequence is possible
    if ((A + B - 1 > N) || (A * B < N)) {
        return {-1};
    }
    
    // Construct the sequence
    vector<int> sequence(N);
    int maxValue = min(A, B);
    for (int i = 0; i < maxValue; i++) {
        sequence[i] = i + 1;
    }
    
    int remainingLen = N - maxValue;
    int nextValue = 1;
    
    if (A <= B) {
        for (int i = maxValue; i < N; i++) {
            sequence[i] = nextValue++;
            if (nextValue > B) {
                nextValue = B;
            }
        }
    } else {
        for (int i = B; i <= maxValue; i++) {
            sequence[i-1] = nextValue++;
        }
        for (int i = maxValue; i < N; i++) {
            sequence[i] = nextValue--;
        }
    }
    
    return sequence;
}

// Function to print the sequence
void printSequence(const vector<int>& sequence) {
    for (int i = 0; i < sequence.size(); i++) {
        cout << sequence[i] << " ";
    }
    cout << endl;
}

int main() {
    // Read input
    int N, A, B;
    cin >> N >> A >> B;
    
    // Generate the sequence
    vector<int> sequence = permuteSequence(N, A, B);
    
    // Print the sequence
    printSequence(sequence);
    
    return 0;
}