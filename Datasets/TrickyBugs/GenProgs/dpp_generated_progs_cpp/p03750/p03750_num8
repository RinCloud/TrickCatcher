#include<bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<pair<int, int>> X(N);
    for(int i = 0; i < N; i++) {
        cin >> X[i].first >> X[i].second;
    }
    
    vector<int> Y(N+1);
    for(int i = 0; i <= N; i++) {
        cin >> Y[i];
    }
    
    int Q;
    cin >> Q;
    
    for(int i = 0; i < Q; i++) {
        int front, back;
        cin >> front >> back;
        X.push_back({front, back});
        
        int maxScore = 0;
        for(int j = 0; j < N+1; j++) {
            if(X[j].first <= Y[j]) {
                maxScore++;
            } else if(X[j].second <= Y[j]) {
                swap(X[j].first, X[j].second);
                maxScore++;
            } else {
                break;
            }
        }
        
        if(maxScore == N+1) {
            cout << maxScore << endl;
        } else {
            cout << -1 << endl;
        }
        
    }
    
    return 0;
}