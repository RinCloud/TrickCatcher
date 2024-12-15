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

    int ans = 1e9;

    for (int i = 0; i < (1 << D); i++) {
        int score = 0;
        int problems = 0;
        int rest_max = -1;

        for (int j = 0; j < D; j++) {
            if ((i >> j) & 1) {
                score += 100 * (j + 1) * p[j] + c[j];
                problems += p[j];
            } else {
                rest_max = j;
            }
        }

        if (score < G) {
            int s1 = 100 * (rest_max + 1);

            if ((G - score + s1 - 1) / s1 < p[rest_max]) {
                problems += (G - score + s1 - 1) / s1;
            } else {
                continue;
            }
        }

        ans = min(ans, problems);
    }

    cout << ans << endl;

    return 0;
}