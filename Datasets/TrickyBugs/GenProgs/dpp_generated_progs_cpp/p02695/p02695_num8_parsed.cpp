#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N, M, Q; // Global variables for N, M, Q
vector<vector<int>> queries;

// Function to calculate the score of the sequence
int calculateScore(const vector<int>& sequence) {
    int score = 0;
    for (const auto& query : queries) {
        int a = query[0];
        int b = query[1];
        int c = query[2];
        int d = query[3];
        
        if (sequence[b - 1] - sequence[a - 1] == c) {
            score += d;
        }
    }
    return score;
}

// Recursive function to generate the sequence
int generateSequence(int index, vector<int>& sequence) {
    int maxScore = 0;
    if (index == N) {
        return calculateScore(sequence);
    }
    
    int start = (index == 0) ? 1 : sequence[index - 1];
    
    for (int i = start; i <= M; i++) {
        sequence[index] = i;
        int score = generateSequence(index + 1, sequence);
        maxScore = max(maxScore, score);
    }
    
    return maxScore;
}

int main() {
    // Read input values
    cin >> N >> M >> Q;
    queries.resize(Q, vector<int>(4));
    for (int i = 0; i < Q; i++) {
        cin >> queries[i][0] >> queries[i][1] >> queries[i][2] >> queries[i][3];
    }

    // Initialize sequence with N elements
    vector<int> sequence(N);

    // Generate sequence recursively and calculate maximum score
    int maxScore = generateSequence(0, sequence);
    
    // Print the maximum score
    cout << maxScore << endl;

    return 0;
}