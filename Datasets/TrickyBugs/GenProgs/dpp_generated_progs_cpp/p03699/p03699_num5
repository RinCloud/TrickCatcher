#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<int> scores(N);
    for (int i = 0; i < N; i++) {
        cin >> scores[i];
    }
    
    int totalScore = 0;
    int maxScore = 0;
    
    for (int i = 0; i < N; i++) {
        totalScore += scores[i];
        
        if (scores[i] % 10 != 0) {
            maxScore = max(maxScore, scores[i]);
        }
    }
    
    if (totalScore % 10 == 0) {
        totalScore -= maxScore;
    }
    
    cout << totalScore << endl;
    
    return 0;
}