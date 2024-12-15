#include <iostream>
#include <vector>

using namespace std;

vector<int> getLexicographicallySequence(int K, int N) {
    vector<int> sequence;
    
    // Find the (X/2)-th (rounded up to the nearest integer) lexicographically smallest one
    int X = pow(K, N);
    int targetIdx = (X + 1) / 2;
    
    for (int i = 0; i < N; i++) {
        int idx = targetIdx % K;
        if (idx == 0) {
            sequence.push_back(K);
            targetIdx = (targetIdx + K - 1) / K;
        } else {
            sequence.push_back(idx);
            targetIdx /= K;
        }
    }
    reverse(sequence.begin(), sequence.end());
    
    return sequence;
}

int main() {
    int K, N;
    cin >> K >> N;
    
    vector<int> sequence = getLexicographicallySequence(K, N);
    
    // Print the sequence
    for (int i = 0; i < N; i++) {
        cout << sequence[i] << " ";
    }
    
    return 0;
}