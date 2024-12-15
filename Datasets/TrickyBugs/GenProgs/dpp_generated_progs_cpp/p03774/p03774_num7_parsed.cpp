#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<pair<int, int>> students(N);
    vector<pair<int, int>> checkpoints(M);

    for (int i = 0; i < N; i++) {
        int a, b;
        cin >> a >> b;
        students[i] = make_pair(a, b);
    }

    for (int i = 0; i < M; i++) {
        int c, d;
        cin >> c >> d;
        checkpoints[i] = make_pair(c, d);
    }

    for (int i = 0; i < N; i++) {
        int minDistance = abs(students[i].first - checkpoints[0].first) + abs(students[i].second - checkpoints[0].second);
        int minIndex = 1;

        for (int j = 1; j < M; j++) {
            int distance = abs(students[i].first - checkpoints[j].first) + abs(students[i].second - checkpoints[j].second);

            if (distance < minDistance) {
                minDistance = distance;
                minIndex = j + 1;
            }
        }

        cout << minIndex << endl;
    }

    return 0;
}