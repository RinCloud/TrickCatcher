#include<iostream>

int main() {
    long long x;
    std::cin >> x;

    long long minimumOperations = (x / 11) * 2;

    if (x % 11 > 0) {
        minimumOperations++;
    }

    if (x % 11 > 6) {
        minimumOperations++;
    }
    
    std::cout << minimumOperations << std::endl;

    return 0;
}