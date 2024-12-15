#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    
    vector<pair<int, int>> students(N);
    for (int i = 0; i < N; i++) {
        cin >> students[i].first >> students[i].second;
    }
    
    vector<pair<int, int>> checkpoints(M);
    for (int i = 0; i < M; i++) {
        cin >> checkpoints[i].first >> checkpoints[i].second;
    }
    
    for (int i = 0; i < N; i++) {
        int minIndex = -1;
        int minDist = 0;
        
        for (int j = 0; j < M; j++) {
            int dist = abs(students[i].first - checkpoints[j].first) + abs(students[i].second - checkpoints[j].second);
            
            if (minIndex == -1 || dist < minDist) {
                minIndex = j + 1;
                minDist = dist;
            }
        }
        
        cout << minIndex << endl;
    }
    
    return 0;
}