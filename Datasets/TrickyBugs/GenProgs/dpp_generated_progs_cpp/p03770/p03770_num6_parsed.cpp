#include <iostream>
#include <vector>
#include <unordered_map>

const int MOD = 1000000007;

struct Ball {
    int color;
    int weight;
};

int main() {
    int N, X, Y;
    std::cin >> N >> X >> Y;

    std::vector<Ball> balls(N);
    for (int i = 0; i < N; ++i) {
        std::cin >> balls[i].color >> balls[i].weight;
    }

    std::unordered_map<int, int> colorCount;
    std::vector<int> colorOrder(N);
    int numColors = 0;

    for (const auto& ball : balls) {
        if (colorCount.find(ball.color) == colorCount.end()) {
            colorCount[ball.color] = numColors;
            colorOrder[numColors] = ball.color;
            ++numColors;
        }
    }

    std::vector<std::vector<long long>> dp(numColors + 1, std::vector<long long>(N + 1, 0));

    dp[0][0] = 1;

    for (int i = 1; i <= numColors; ++i) {
        for (int j = 0; j <= N; ++j) {
            for (int k = j; k >= 0; --k) {
                if (j - k <= X && dp[i - 1][k] > 0) {
                    dp[i][j] = (dp[i][j] + dp[i - 1][k]) % MOD;
                }
            }
        }
    }

    std::vector<int> totalWeight(numColors + 1, 0);

    for (const auto& ball : balls) {
        totalWeight[colorCount[ball.color]] += ball.weight;
    }

    std::vector<std::vector<long long>> dp2(numColors + 1, std::vector<long long>(N + 1, 0));

    dp2[0][0] = 1;

    for (int i = 1; i <= numColors; ++i) {
        for (int j = 0; j <= N; ++j) {
            for (int k = j; k >= 0; --k) {
                if (j - k <= Y && dp2[i - 1][k] > 0) {
                    dp2[i][j] = (dp2[i][j] + dp2[i - 1][k]) % MOD;
                }
            }
        }
    }

    std::vector<long long> prefixSum(N + 1, 0);

    for (int i = 1; i <= N; ++i) {
        prefixSum[i] = (prefixSum[i - 1] + dp[numColors][i]) % MOD;
    }

    long long answer = 0;

    for (int i = 1; i <= numColors; ++i) {
        int prevSum = 0;
        for (int j = 1; j <= N; ++j) {
            int currSum = prevSum + dp2[i][j] - dp2[i - 1][j];
            currSum %= MOD;
            if (currSum < 0) {
                currSum += MOD;
            }
            answer = (answer + currSum * prefixSum[N - j]) % MOD;
            prevSum = currSum;
        }
    }

    std::cout << answer << std::endl;

    return 0;
}