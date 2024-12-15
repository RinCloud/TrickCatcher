#include <iostream>

int main() {
    int K;
    std::cin >> K;

    int even_count = K / 2;
    int odd_count = K - even_count;

    int pairs_count = even_count * odd_count;
    std::cout << pairs_count << std::endl;

    return 0;
}