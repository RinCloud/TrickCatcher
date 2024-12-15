#include <iostream>
#include <vector>

using namespace std;

int main() {
    int D, G;
    cin >> D >> G;

    vector<int> p(D), c(D);
    for (int i = 0; i < D; i++) {
        cin >> p[i] >> c[i];
    }

    int minProblems = INT_MAX;

    for (int bitmask = 0; bitmask < (1 << D); bitmask++) {
        int problems = 0;
        int score = 0;
        int maxUnsolved = -1;

        for (int i = 0; i < D; i++) {
            if (bitmask & (1 << i)) {
                problems += p[i];
                score += p[i] * 100 * (i + 1) + c[i];
            } else {
                maxUnsolved = i;
            }
        }

        if (score >= G) {
            minProblems = min(minProblems, problems);
        } else {
            int remaining = G - score;
            int solve = (maxUnsolved + 1) * 100;

            if (remaining <= solve * p[maxUnsolved]) {
                problems += (remaining + solve - 1) / solve;
                minProblems = min(minProblems, problems);
            }
        }
    }

    cout << minProblems << endl;

    return 0;
}