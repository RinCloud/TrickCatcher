#include <iostream>
#include <string>

int main() {
    std::string S;
    std::cin >> S;

    int redCount = 0;
    int blueCount = 0;

    for (char c : S) {
        if (c == '0') {
            redCount++;
        } else {
            blueCount++;
        }
    }

    int minCount = std::min(redCount, blueCount);

    std::cout << minCount * 2 << std::endl;

    return 0;
}