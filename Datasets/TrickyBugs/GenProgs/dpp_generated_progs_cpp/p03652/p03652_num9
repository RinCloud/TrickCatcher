#include <iostream>
#include <vector>

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

    vector<int> count(M);
    for (int j = 0; j < M; j++) {
        for (int i = 0; i < N; i++) {
            if (A[i][0] == j + 1) {
                count[j]++;
                break;
            }
        }
    }

    int minParticipants = N;
    for (int i = 0; i < M; i++) {
        minParticipants = min(minParticipants, count[i]);
    }

    cout << minParticipants << endl;

    return 0;
}