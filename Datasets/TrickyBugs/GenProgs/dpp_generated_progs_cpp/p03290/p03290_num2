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
    for (int mask = 0; mask < (1 << D); mask++) {
        int solvedProblems = 0;
        int totalScore = 0;
        int bonusCount = 0;
        for (int i = 0; i < D; i++) {
            if (mask & (1 << i)) {
                solvedProblems += p[i];
                totalScore += 100 * (i + 1) * p[i] + c[i];
                bonusCount += p[i];
            }
        }

        if (totalScore >= G) {
            minProblems = min(minProblems, solvedProblems);
        } else {
            for (int i = D - 1; i >= 0; i--) {
                if (!(mask & (1 << i))) {
                    int remainingScore = G - totalScore;
                    int problemsNeeded = (remainingScore + 100 * (i + 1) - 1) / (100 * (i + 1));
                    if (problemsNeeded <= p[i]) {
                        solvedProblems += problemsNeeded;
                        bonusCount += problemsNeeded;
                        totalScore += 100 * (i + 1) * problemsNeeded;
                    } else {
                        solvedProblems += p[i];
                        bonusCount += p[i];
                        totalScore += 100 * (i + 1) * p[i] + c[i];
                    }
                }
            }

            if (totalScore >= G) {
                minProblems = min(minProblems, solvedProblems);
            }
        }
    }

    cout << minProblems << endl;

    return 0;
}