#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, Q;
    cin >> N;
    
    vector<pair<int, int>> cards(N);
    for (int i = 0; i < N; i++) {
        cin >> cards[i].first >> cards[i].second;
    }
    
    vector<int> C(N+1);
    for (int i = 0; i < N+1; i++) {
        cin >> C[i];
    }
    
    cin >> Q;
    
    for (int i = 0; i < Q; i++) {
        int D, E;
        cin >> D >> E;
        
        int maxScore = 0;
        
        // Find the number of cards whose front side can be used
        for (int j = 0; j < N; j++) {
            if (cards[j].first <= D && cards[j].second <= E) {
                maxScore++;
            }
        }
        
        // Find the number of pairs that can be formed
        int numPairs = min(N+1, maxScore+1);
        
        // Calculate the score for the round
        int score = min(numPairs, N+1);
        if (C[numPairs-1] > E) {
            score--;
        }
        
        cout << score << endl;
    }
    
    return 0;
}