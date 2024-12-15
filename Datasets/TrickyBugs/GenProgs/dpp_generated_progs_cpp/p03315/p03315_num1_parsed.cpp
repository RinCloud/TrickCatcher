#include <iostream>
#include <string>

int main() {
    std::string S;
    std::cin >> S;

    int count = 0;
    for (char c : S) {
        if (c == '+') {
            count++;
        } else {
            count--;
        }
    }

    std::cout << count << std::endl;

    return 0;
}