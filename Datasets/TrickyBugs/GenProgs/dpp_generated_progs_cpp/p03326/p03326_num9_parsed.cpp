#include <iostream>
#include <vector>
#include <algorithm>

struct Cake {
    long long beauty;
    long long tastiness;
    long long popularity;
};

bool compareByValue(const Cake& a, const Cake& b) {
    return (std::abs(a.beauty) + std::abs(a.tastiness) + std::abs(a.popularity)) > (std::abs(b.beauty) + std::abs(b.tastiness) + std::abs(b.popularity));
}

int main() {
    int N, M;
    std::cin >> N >> M;

    std::vector<Cake> cakes(N);
    for (int i = 0; i < N; i++) {
        std::cin >> cakes[i].beauty >> cakes[i].tastiness >> cakes[i].popularity;
    }

    std::sort(cakes.begin(), cakes.end(), compareByValue);

    std::vector<long long> dp(1 << N);

    for (int i = 0; i < M; i++) {
        std::vector<long long> newDP(1 << N);
        for (int j = 0; j < (1 << N); j++) {
            for (int k = 0; k < N; k++) {
                if ((j & (1 << k)) == 0) {
                    newDP[j | (1 << k)] = std::max(newDP[j | (1 << k)], dp[j] + std::abs(cakes[k].beauty) + std::abs(cakes[k].tastiness) + std::abs(cakes[k].popularity));
                }
            }
        }
        dp = newDP;
    }

    std::cout << dp[(1 << N) - 1] << std::endl;

    return 0;
}