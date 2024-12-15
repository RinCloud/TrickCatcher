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

    long long max_score = LLONG_MIN;

    for (int i = 0; i < N; i++) {
        int curr = i;
        long long score = 0;
        int moves = 0;

        while (true) {
            curr = P[curr];
            score += C[curr];
            moves++;

            if (curr == i) {
                long long cycle_score = score;

                if (K >= moves) {
                    long long cycle_count = K / moves;
                    long long cycle_sum = cycle_count * cycle_score;

                    max_score = max(max_score, cycle_sum + max(0LL, cycle_score));
                }

                break;
            }

            if (moves == K) {
                max_score = max(max_score, score);
                break;
            }
        }
    }

    cout << max_score << endl;

    return 0;
}