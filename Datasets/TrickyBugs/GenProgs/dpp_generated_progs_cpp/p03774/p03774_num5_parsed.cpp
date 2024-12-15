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
        int min_index = 0;
        int min_dist = abs(students[i].first - checkpoints[0].first) + abs(students[i].second - checkpoints[0].second);

        for (int j = 1; j < M; j++) {
            int dist = abs(students[i].first - checkpoints[j].first) + abs(students[i].second - checkpoints[j].second);
            if (dist < min_dist) {
                min_index = j;
                min_dist = dist;
            }
        }

        cout << (min_index + 1) << endl;
    }

    return 0;
}