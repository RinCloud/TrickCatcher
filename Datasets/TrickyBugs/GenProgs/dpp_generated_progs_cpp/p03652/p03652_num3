#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    // Read the favorite sports of each person
    vector<vector<int>> favorites(N, vector<int>(M));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> favorites[i][j];
        }
    }

    // Count the number of participants for each sport
    vector<int> participants(M, 0);
    for (int j = 0; j < M; j++) {
        for (int i = 0; i < N; i++) {
            if (favorites[i][0] == j + 1) {
                participants[j]++;
            }
        }
    }

    // Find the sport with the maximum number of participants
    int maxParticipants = *max_element(participants.begin(), participants.end());

    cout << maxParticipants << endl;

    return 0;
}