#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int K;
    std::cin >> K;

    std::vector<int> digits;
    while (K > 0) {
        digits.push_back(K % 10);
        K /= 10;
    }
    std::reverse(digits.begin(), digits.end());

    int sum = 0;
    for (int i : digits) {
        sum += i;
    }

    std::cout << sum << std::endl;

    return 0;
}