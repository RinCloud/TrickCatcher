#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
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

    map<int, int> freq;
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            freq[sports[j][i]]++;
        }
    }

    int minParticipants = N;
    for (auto it : freq) {
        minParticipants = min(minParticipants, N - it.second);
    }

    cout << minParticipants << endl;

    return 0;
}