#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    vector<int> P(N);
    for (int i = 0; i < N; i++) {
        cin >> P[i];
        P[i]--;
    }

    vector<int> C(N);
    for (int i = 0; i < N; i++) {
        cin >> C[i];
    }

    int maxScore = -1e9;
    for (int start = 0; start < N; start++) {
        int cur = start;
        int score = 0;
        for (int i = 0; i < K; i++) {
            cur = P[cur];
            score += C[cur];
            maxScore = max(maxScore, score);
            if (score <= 0) {
                break;
            }
        }
    }

    cout << maxScore << endl;

    return 0;
}
