#include <iostream>
#include <vector>

int main() {
    int N, x;
    std::cin >> N >> x;

    std::vector<int> a(N);
    for (int i = 0; i < N; i++) {
        std::cin >> a[i];
    }

    long long operations = 0;
    for (int i = 1; i < N; i++) {
        int diff = a[i - 1] + a[i] - x;
        if (diff > 0) {
            operations += diff;
            a[i] = std::max(0, a[i] - diff);
        }
    }

    std::cout << operations << std::endl;

    return 0;
}