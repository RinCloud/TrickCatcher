#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<pair<int, int>> cards(N);
    for (int i = 0; i < N; i++) {
        cin >> cards[i].first >> cards[i].second;
    }
    
    vector<int> Y(N + 1);
    for (int i = 0; i <= N; i++) {
        cin >> Y[i];
    }
    
    int Q;
    cin >> Q;
    
    for (int i = 0; i < Q; i++) {
        int D, E;
        cin >> D >> E;
        
        int maxScore = 0;
        for (int j = 0; j <= N; j++) {
            if (cards[j].first <= D && Y[j] >= E) {
                maxScore++;
            }
        }
        
        cout << maxScore << endl;
    }
    
    return 0;
}