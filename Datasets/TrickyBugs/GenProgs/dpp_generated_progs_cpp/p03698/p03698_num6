#include <iostream>
#include <string>
#include <unordered_set>

int main() {
    std::string S;
    std::cin >> S;

    std::unordered_set<char> uniqueChars;

    for (char c : S) {
        if (uniqueChars.count(c) > 0) {
            std::cout << "no" << std::endl;
            return 0;
        }
        uniqueChars.insert(c);
    }

    std::cout << "yes" << std::endl;
    return 0;
}