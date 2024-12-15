#include <iostream>
#include <vector>

int main() {
    int N;
    std::cin >> N;

    std::vector<int> seats(100001, 0);

    for (int i = 0; i < N; ++i) {
        int l, r;
        std::cin >> l >> r;
        for (int j = l; j <= r; ++j) {
            seats[j] = 1;
        }
    }

    int count = 0;
    for (int i = 1; i <= 100000; ++i) {
        count += seats[i];
    }

    std::cout << count << std::endl;

    return 0;
}