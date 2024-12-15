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
    for (int mask = 0; mask < (1 << D); mask++) {
        int solved = 0;
        int score = 0;
        int rest_max = -1;
        for (int i = 0; i < D; i++) {
            if (mask >> i & 1) {
                solved += p[i];
                score += 100 * (i + 1) * p[i] + c[i];
            } else {
                rest_max = i;
            }
        }

        if (score < G) {
            int s = 100 * (rest_max + 1);
            int need = (G - score + s - 1) / s;
            if (need >= p[rest_max]) {
                continue;
            }
            solved += need;
        }

        ans = min(ans, solved);
    }

    cout << ans << endl;

    return 0;
}