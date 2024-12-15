#include <iostream>
#include <vector>
#include <cmath>

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
        int minDist = abs(students[i].first - checkpoints[0].first) + abs(students[i].second - checkpoints[0].second);
        int checkpointIdx = 1;

        for (int j = 1; j < M; j++) {
            int dist = abs(students[i].first - checkpoints[j].first) + abs(students[i].second - checkpoints[j].second);

            if (dist < minDist) {
                minDist = dist;
                checkpointIdx = j + 1;
            }
        }

        cout << checkpointIdx << endl;
    }

    return 0;
}