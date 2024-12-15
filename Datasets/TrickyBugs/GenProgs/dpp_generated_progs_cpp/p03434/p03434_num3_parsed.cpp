#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int N;
    std::cin >> N;

    std::vector<int> a(N);
    for (int i = 0; i < N; i++) {
        std::cin >> a[i];
    }

    std::sort(a.begin(), a.end(), std::greater<int>());

    int aliceScore = 0;
    int bobScore = 0;
    for (int i = 0; i < N; i++) {
        if (i % 2 == 0) {
            aliceScore += a[i];
        } else {
            bobScore += a[i];
        }
    }

    std::cout << aliceScore - bobScore << std::endl;

    return 0;
}