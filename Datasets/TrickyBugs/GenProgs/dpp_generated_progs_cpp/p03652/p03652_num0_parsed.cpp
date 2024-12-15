#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    
    vector<vector<int>> A(N, vector<int>(M));
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> A[i][j];
        }
    }
    
    vector<int> participantCount(M, 0);
    
    for (int j = 0; j < M; j++) {
        for (int i = 0; i < N; i++) {
            if (A[i][0] == j+1) {
                participantCount[j]++;
                break;
            }
        }
    }
    
    int minParticipants = *min_element(participantCount.begin(), participantCount.end());
    
    cout << minParticipants << endl;
    
    return 0;
}