#include <iostream>

int main() {
    int N;
    std::cin >> N;
    
    int sum = 0;
    int temp = N;
    while (temp > 0) {
        sum += temp % 10;
        temp /= 10;
    }
    
    if (N % sum == 0) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }
    
    return 0;
}
