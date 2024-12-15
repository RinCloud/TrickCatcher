#include <iostream>
#include <string>
#include <unordered_set>

int main() {
    std::string S;
    std::cin >> S;

    std::unordered_set<char> charSet;

    bool allDifferent = true;
    for (char c : S) {
        if (charSet.count(c) > 0) {
            allDifferent = false;
            break;
        }
        charSet.insert(c);
    }

    if (allDifferent) {
        std::cout << "yes" << std::endl;
    } else {
        std::cout << "no" << std::endl;
    }

    return 0;
}