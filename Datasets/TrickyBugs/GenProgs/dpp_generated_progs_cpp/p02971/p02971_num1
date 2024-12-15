#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int N;
    std::cin >> N;

    std::vector<int> sequence(N);
    for (int i = 0; i < N; i++) {
        std::cin >> sequence[i];
    }

    int max_val = *std::max_element(sequence.begin(), sequence.end());

    for (int i = 0; i < N; i++) {
        int max_other = max_val;
        if (sequence[i] == max_val) {
            max_other = *std::max_element(sequence.begin(), sequence.begin() + i);
        }
        else {
            max_other = std::max(max_other, *std::max_element(sequence.begin() + i + 1, sequence.end()));
        }
        std::cout << max_other << std::endl;
    }

    return 0;
}