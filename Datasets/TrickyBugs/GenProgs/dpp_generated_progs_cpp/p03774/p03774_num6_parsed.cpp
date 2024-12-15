#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int calculateManhattanDistance(int x1, int y1, int x2, int y2) {
    return abs(x1 - x2) + abs(y1 - y2);
}

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
        int minDistance = calculateManhattanDistance(students[i].first, students[i].second, checkpoints[0].first, checkpoints[0].second);
        int minIndex = 1;
        
        for (int j = 1; j < M; j++) {
            int distance = calculateManhattanDistance(students[i].first, students[i].second, checkpoints[j].first, checkpoints[j].second);
            if (distance < minDistance) {
                minDistance = distance;
                minIndex = j + 1;
            }
        }
        
        cout << minIndex << endl;
    }
    
    return 0;
}