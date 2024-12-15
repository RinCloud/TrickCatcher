#include <iostream>

int main() {
    long long A, B, C;
    std::cin >> A >> B >> C;
    
    long long minimum_difference = 0;
    if (A % 2 == 0 || B % 2 == 0 || C % 2 == 0) {
        minimum_difference = 0;
    } else {
        minimum_difference = std::min({A * B, B * C, A * C});
    }
    
    std::cout << minimum_difference << std::endl;

    return 0;
}