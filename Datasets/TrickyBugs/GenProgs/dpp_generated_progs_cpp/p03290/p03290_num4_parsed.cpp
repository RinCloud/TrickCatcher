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
        for (int i = 0; i < D; i++) {
            if (mask & (1 << i)) {
                solved += p[i];
                score += 100 * (i + 1) * p[i] + c[i];
            }
        }
        if (score >= G) {
            ans = min(ans, solved);
            continue;
        }
        for (int i = D - 1; i >= 0; i--) {
            if (mask & (1 << i)) {
                continue;
            }
            for (int j = 0; j < p[i]; j++) {
                if (score >= G) {
                    break;
                }
                solved++;
                score += 100 * (i + 1);
            }
        }
        ans = min(ans, solved);
    }

    cout << ans << endl;

    return 0;
}