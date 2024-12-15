#include <iostream>
#include <string>

int main() {
    std::string N;
    std::cin >> N;

    int sum = 0;
    for (char c : N) {
        sum += c - '0';
    }

    if (sum % 9 == 0) {
        std::cout << "Yes\n";
    } else {
        std::cout << "No\n";
    }

    return 0;
}