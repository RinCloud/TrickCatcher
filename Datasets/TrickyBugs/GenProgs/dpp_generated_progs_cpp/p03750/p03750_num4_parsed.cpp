#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<int> A(N);
    vector<int> B(N);
    
    for(int i = 0; i < N; i++) {
        cin >> A[i] >> B[i];
    }
    
    vector<int> C(N+1);
    
    for(int i = 0; i <= N; i++) {
        cin >> C[i];
    }
    
    int Q;
    cin >> Q;
    
    for(int i = 0; i < Q; i++) {
        int D, E;
        cin >> D >> E;
        
        vector<pair<int, int>> cards;
        
        for(int j = 0; j < N; j++) {
            if(A[j] <= D && B[j] <= E) {
                cards.push_back({A[j], j});
            }
        }
        
        cards.push_back({D, -1});
        sort(cards.begin(), cards.end());
        
        vector<int> maxScore(N+1);
        maxScore[0] = -1;
        
        for(int j = 1; j <= N; j++) {
            maxScore[j] = max(maxScore[j-1], C[j-1]);
        }
        
        int score = 0;
        
        for(int j = 0; j < cards.size(); j++) {
            if(cards[j].second == -1) {
                score++;
            } else {
                int index = cards[j].second;
                score = max(score, maxScore[index] + 1);
            }
        }
        
        cout << score << endl;
    }
    
    return 0;
}