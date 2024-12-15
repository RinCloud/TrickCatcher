#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    
    vector<int> P(N + 1);
    for (int i = 1; i <= N; i++) {
        cin >> P[i];
    }
    
    vector<int> C(N + 1);
    for (int i = 1; i <= N; i++) {
        cin >> C[i];
    }
    
    long long maxScore = -1e18;
    
    for (int i = 1; i <= N; i++) {
        int curSquare = i;
        long long curScore = 0;
        
        for (int j = 1; j <= K; j++) {
            curSquare = P[curSquare];
            curScore += C[curSquare];
            maxScore = max(maxScore, curScore);
            
            if (curSquare == i) {
                long long cycle = K / j;
                long long remainder = K % j;

                maxScore = max(maxScore, curScore + cycle * max(0LL, curScore));
                maxScore = max(maxScore, curScore + cycle * maxScore + remainder * max(0LL, curScore));
                break;
            }
        }
    }
    
    cout << maxScore << endl;
    
    return 0;
}