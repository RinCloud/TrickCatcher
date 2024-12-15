#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<int> A(N), B(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i] >> B[i];
    }
    
    vector<int> C(N+1);
    for (int i = 1; i <= N+1; i++) {
        cin >> C[i];
    }
    
    int Q;
    cin >> Q;
    
    vector<int> D(Q), E(Q);
    for (int i = 0; i < Q; i++) {
        cin >> D[i] >> E[i];
    }
    
    // Preprocess the maximum B value for each prefix of deck X
    vector<int> maxB(N+1);
    maxB[0] = INT_MIN;
    for (int i = 1; i <= N; i++) {
        maxB[i] = max(maxB[i-1], B[i-1]);
    }
    
    for (int i = 0; i < Q; i++) {
        int d = D[i], e = E[i];
        
        // Find the position in deck X where d can be inserted
        int pos = upper_bound(maxB.begin(), maxB.end(), e) - maxB.begin();
        
        // If there are no positions where d can be inserted, the score is -1
        if (pos == 0) {
            cout << -1 << endl;
            continue;
        }
        
        // Calculate the score
        int score = pos;
        if (pos <= N && A[pos-1] <= d) {
            score--;
        }
        
        cout << score << endl;
    }
    
    return 0;
}