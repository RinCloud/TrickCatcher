#include <iostream>
#include <vector>
#include <algorithm>

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
        int cnt = 0;
        int rest_max = -1;
        for (int j = 0; j < D; j++) {
            if (i >> j & 1) {
                score += (j + 1) * 100 * p[j] + c[j];
                cnt += p[j];
            } else {
                rest_max = j;
            }
        }

        if (score < G) {
            int s1 = (rest_max + 1) * 100;
            int need = (G - score + s1 - 1) / s1;
            if (need >= p[rest_max]) continue;
            cnt += need;
        }

        ans = min(ans, cnt);
    }

    cout << ans << endl;

    return 0;
}