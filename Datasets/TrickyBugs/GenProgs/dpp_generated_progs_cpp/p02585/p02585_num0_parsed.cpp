#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    vector<int> P(N), C(N);
    for (int i = 0; i < N; i++) {
        cin >> P[i];
        P[i]--;
    }

    for (int i = 0; i < N; i++) {
        cin >> C[i];
    }

    long long ans = -1e18;
    for (int i = 0; i < N; i++) {
        int cur = i;
        long long score = 0;
        vector<long long> scores;
        while (1) {
            cur = P[cur];
            score += C[cur];
            scores.push_back(score);
            if (cur == i) break;
        }
        int len = scores.size();
        long long cycleScore = scores[len - 1];
        long long cycleSum = scores[len - 1];
        for (int j = 0; j < len - 1; j++) {
            cycleSum += scores[j];
            long long cycleMax = cycleScore;
            if (cycleSum > 0) {
                cycleMax += (K - 1) / len * cycleSum;
            }
            ans = max(ans, cycleMax);
        }
    }

    cout << ans << endl;

    return 0;
}