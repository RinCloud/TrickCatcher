#include <iostream>
#include <vector>
using namespace std;

// Function to find the maximum possible score of the sequence A
int findMaximumScore(int N, int M, int Q, vector<vector<int>>& queries){
    // Initialize the maximum score to 0
    int maxScore = 0;
    
    // Generate all possible sequences of length N satisfying the conditions
    vector<int> sequence(N, 0);
    generateSequences(sequence, 0, N, M, queries, maxScore);
    
    return maxScore;
}

// Recursive function to generate all possible sequences of length N satisfying the conditions
void generateSequences(vector<int>& sequence, int index, int N, int M, vector<vector<int>>& queries, int& maxScore){
    // Base case: if all positions in the sequence have been filled
    if(index == N){
        // Calculate the score for the current sequence
        int score = calculateScore(sequence, queries);
        // Update the maximum score if necessary
        maxScore = max(maxScore, score);
        return;
    }
    
    // Recursive case: try all possible values for the current position in the sequence
    for(int i = 1; i <= M; i++){
        sequence[index] = i;
        generateSequences(sequence, index+1, N, M, queries, maxScore);
    }
}

// Function to calculate the score of a sequence
int calculateScore(vector<int>& sequence, vector<vector<int>>& queries){
    int score = 0;
    
    // Iterate over all queries
    for(auto query : queries){
        int ai = query[0] - 1;
        int bi = query[1] - 1;
        int ci = query[2];
        int di = query[3];
        
        // Check if the conditions are satisfied for the current query
        if(sequence[bi] - sequence[ai] == ci){
            score += di;
        }
    }
    
    return score;
}

int main(){
    // Read the input values
    int N, M, Q;
    cin >> N >> M >> Q;
    
    // Read the queries
    vector<vector<int>> queries(Q, vector<int>(4));
    for(int i = 0; i < Q; i++){
        cin >> queries[i][0] >> queries[i][1] >> queries[i][2] >> queries[i][3];
    }
    
    // Find the maximum possible score of A
    int maxScore = findMaximumScore(N, M, Q, queries);
    
    // Print the result
    cout << maxScore << endl;
    
    return 0;
}