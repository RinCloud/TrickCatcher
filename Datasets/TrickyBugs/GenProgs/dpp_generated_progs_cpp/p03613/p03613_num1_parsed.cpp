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

    std::sort(a.begin(), a.end());

    int maxX = a[N / 2];
    int countX = std::count(a.begin(), a.end(), maxX);

    std::cout << countX << std::endl;

    return 0;
}