#include <iostream>
#include <algorithm>

int main() {
    int A, B, C;
    std::cin >> A >> B >> C;

    // Calculate the number of red blocks and blue blocks
    long long red = (A / 2) * B * C + ((A % 2) * B * (C / 2));
    long long blue = (A / 2) * B * C + (((A % 2) * B * (C % 2)) + ((B % 2) * (C / 2)));

    // Calculate the minimum difference
    long long minimum_difference = std::abs(red - blue);
    std::cout << minimum_difference << std::endl;

    return 0;
}