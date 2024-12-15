#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

const int MOD = 998244353;

// Function to calculate power of a number modulo m
int modPow(long long x, long long y) {
    long long res = 1;
    x = x % MOD;
    while (y > 0) {
        if (y & 1) {
            res = (res * x) % MOD;
        }
        y = y >> 1;
        x = (x * x) % MOD;
    }
    return (int) res;
}

int main() {
    int N;
    std::cin >> N;

    // Read edges of X, Y, Z
    std::vector<std::pair<int, int>> edgesX, edgesY, edgesZ;
    int M;
    std::cin >> M;
    for (int i = 0; i < M; i++) {
        int a, b;
        std::cin >> a >> b;
        edgesX.emplace_back(a, b);
    }

    std::cin >> M;
    for (int i = 0; i < M; i++) {
        int a, b;
        std::cin >> a >> b;
        edgesY.emplace_back(a, b);
    }

    std::cin >> M;
    for (int i = 0; i < M; i++) {
        int a, b;
        std::cin >> a >> b;
        edgesZ.emplace_back(a, b);
    }

    // Total weight of the independent set
    long long totalWeight = 0;

    // Loop over all possible vertices in W
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            for (int k = 1; k <= N; k++) {
                // Check if the current vertex is valid and belongs to an independent set
                bool validVertex = true;

                // Check if there is any edge between x_i and x_j in X
                for (const auto& edge : edgesX) {
                    if ((edge.first == i && edge.second == j) || (edge.first == j && edge.second == i)) {
                        validVertex = false;
                        break;
                    }
                }

                if (!validVertex) {
                    continue;
                }

                // Check if there is any edge between y_i and y_j in Y
                for (const auto& edge : edgesY) {
                    if ((edge.first == i && edge.second == j) || (edge.first == j && edge.second == i)) {
                        validVertex = false;
                        break;
                    }
                }

                if (!validVertex) {
                    continue;
                }

                // Check if there is any edge between z_i and z_j in Z
                for (const auto& edge : edgesZ) {
                    if ((edge.first == i && edge.second == j) || (edge.first == j && edge.second == i)) {
                        validVertex = false;
                        break;
                    }
                }

                if (!validVertex) {
                    continue;
                }

                // Calculate the weight of the current vertex
                long long weight = modPow(1000000000000000000, i + j + k);
                totalWeight = (totalWeight + weight) % MOD;
            }
        }
    }

    // Print the maximum possible total weight modulo 998,244,353
    std::cout << totalWeight << std::endl;

    return 0;
}