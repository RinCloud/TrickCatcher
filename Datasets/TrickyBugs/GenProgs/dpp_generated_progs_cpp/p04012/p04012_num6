#include <iostream>
#include <string>
#include <unordered_map>

int main() {
    std::string w;
    std::cin >> w;

    std::unordered_map<char, int> count;

    for (char c : w) {
        // Increment the count of each character in w
        count[c]++;
    }

    // Check if each character occurs an even number of times
    bool isBeautiful = true;
    for (auto& pair : count) {
        if (pair.second % 2 != 0) {
            isBeautiful = false;
            break;
        }
    }

    // Print the result
    if (isBeautiful) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }

    return 0;
}