#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<vector<int>> sports(N, vector<int>(M));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> sports[i][j];
        }
    }

    vector<int> participants(M, 0);
    for (int i = 0; i < N; i++) {
        participants[sports[i][0] - 1]++;
    }

    int maxParticipants = *max_element(participants.begin(), participants.end());

    cout << maxParticipants << endl;

    return 0;
}