#include <iostream>
#include <vector>

int main() {
    int D, G;
    std::cin >> D >> G;

    std::vector<int> p(D), c(D);
    for (int i = 0; i < D; i++) {
        std::cin >> p[i] >> c[i];
    }

    int ans = INT_MAX;
    for (int mask = 0; mask < (1 << D); mask++) {
        int score = 0;
        int num_solved = 0;

        for (int i = 0; i < D; i++) {
            if (mask & (1 << i)) {
                score += 100 * (i + 1) * p[i] + c[i];
                num_solved += p[i];
            }
        }

        if (score >= G) {
            ans = std::min(ans, num_solved);
        } else {
            for (int i = D - 1; i >= 0; i--) {
                if (!(mask & (1 << i))) {
                    for (int j = 0; j < p[i]; j++) {
                        if (score >= G) {
                            break;
                        }
                        score += 100 * (i + 1);
                        num_solved++;
                    }
                }
            }
            ans = std::min(ans, num_solved);
        }
    }

    std::cout << ans << std::endl;

    return 0;
}
