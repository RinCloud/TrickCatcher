#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int N;
    std::cin >> N;

    std::vector<int> permutation(N);
    for (int i = 0; i < N; i++) {
        permutation[i] = i + 1;
    }

    int maxSum = 0;
    do {
        int sum = 0;
        for (int i = 0; i < N; i++) {
            sum += i % permutation[i];
        }
        maxSum = std::max(maxSum, sum);
    } while (std::next_permutation(permutation.begin(), permutation.end()));

    std::cout << maxSum << std::endl;

    return 0;
}