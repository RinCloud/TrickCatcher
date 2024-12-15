#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int D, G;
    cin >> D >> G;

    vector<int> p(D + 1);
    vector<int> c(D + 1);
    for (int i = 1; i <= D; i++) {
        cin >> p[i] >> c[i];
    }

    int ans = numeric_limits<int>::max();

    for (int bit = 0; bit < (1 << D); bit++) {
        int solved = 0;
        int score = 0;
        int problems = 0;

        for (int i = 1; i <= D; i++) {
            if (bit & (1 << (i - 1))) {
                solved += p[i];
                score += p[i] * 100 * i + c[i];
                problems += p[i];
            }
        }

        if (score >= G) {
            ans = min(ans, problems);
        } else {
            for (int i = D; i >= 1; i--) {
                if (!(bit & (1 << (i - 1)))) {
                    for (int j = 0; j < p[i]; j++) {
                        if (score >= G) {
                            break;
                        }
                        solved++;
                        score += 100 * i;
                        problems++;
                    }
                }
            }
            if (score >= G) {
                ans = min(ans, problems);
            }
        }
    }

    cout << ans << endl;

    return 0;
}