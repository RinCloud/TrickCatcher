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

    long long sum = 0;
    do {
        long long maxRemainder = 0;
        for (int i = 0; i < N; i++) {
            long long remainder = (i + 1) % permutation[i];
            if (remainder > maxRemainder) {
                maxRemainder = remainder;
            }
        }
        sum += maxRemainder;
    } while (std::next_permutation(permutation.begin(), permutation.end()));

    std::cout << sum << std::endl;

    return 0;
}