#include <iostream>
#include <vector>
#include <algorithm>
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

    // Group balls by color
    std::unordered_map<int, std::vector<int>> ballsByColor;
    for (int i = 0; i < N; ++i) {
        ballsByColor[balls[i].color].push_back(i);
    }

    // Initialize the count of sequences to 1
    int count = 1;

    // Loop through each color group
    for (const auto& colorGroup : ballsByColor) {
        const auto& colorBalls = colorGroup.second;

        // Sort the balls in the color group by weight in increasing order
        std::sort(colorBalls.begin(), colorBalls.end(), [&](int i, int j) {
            return balls[i].weight < balls[j].weight;
        });

        // Calculate the prefix sum of weights in the color group
        std::vector<long long> prefixSum(colorBalls.size() + 1, 0);
        for (int i = 0; i < colorBalls.size(); ++i) {
            prefixSum[i + 1] = prefixSum[i] + balls[colorBalls[i]].weight;
        }

        // Loop through each adjacent pair of balls in the color group
        for (int i = 0; i + 1 < colorBalls.size(); ++i) {
            int currBall = colorBalls[i];
            int nextBall = colorBalls[i + 1];

            // Check if the total weight of the pair is at most X
            if (prefixSum[i + 2] - prefixSum[i] <= X) {
                // Swap the positions of the balls
                std::swap(balls[currBall], balls[nextBall]);

                // Update the count of sequences
                count = (2 * count) % MOD;

                // Check if the total weight of the pair is at most Y after the swap
                if (prefixSum[i + 2] - prefixSum[i] <= Y) {
                    // Update the count of sequences again
                    count = (count - 1) % MOD;
                }
            }
        }
    }

    std::cout << count << std::endl;

    return 0;
}