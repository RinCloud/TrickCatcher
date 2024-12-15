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
    int middle = a[N/2];
    int count = 0;

    for (int i = 0; i < N; i++) {
        count += std::abs(a[i] - middle);
    }

    std::cout << count << std::endl;

    return 0;
}