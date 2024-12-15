#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    vector<int> P(N);
    vector<int> C(N);
    for (int i = 0; i < N; i++) {
        cin >> P[i];
        P[i]--;
    }
    for (int i = 0; i < N; i++) {
        cin >> C[i];
    }

    long long ans = LLONG_MIN;
    for (int start = 0; start < N; start++) {
        int cur = start;
        long long score = 0;
        int loop = 0;
        while (true) {
            cur = P[cur];
            score += C[cur];
            loop++;

            if (loop == K) {
                ans = max(ans, score);
                break;
            }

            if (cur == start) {
                long long cycle = K / loop;
                long long remainder = K % loop;
                long long cycleScore = score * cycle;
                long long maxCycleScore = cycleScore;
                if (cycle > 0 && cycleScore < 0 && score > 0) {
                    maxCycleScore = max(maxCycleScore, score);
                }
                if (remainder > 0) {
                    long long additionalScore = 0;
                    for (int i = 0; i < remainder; i++) {
                        cur = P[cur];
                        additionalScore += C[cur];
                        maxCycleScore = max(maxCycleScore, cycleScore + additionalScore);
                    }
                }
                ans = max(ans, maxCycleScore);
                break;
            }
        }
    }

    cout << ans << endl;

    return 0;
}