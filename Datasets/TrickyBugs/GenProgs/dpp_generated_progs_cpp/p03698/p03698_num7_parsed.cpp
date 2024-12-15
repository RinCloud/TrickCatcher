#include <iostream>
#include <string>
#include <unordered_set>

int main() {
    std::string S;
    std::cin >> S;

    std::unordered_set<char> charSet;
    bool allDifferent = true;

    for (char ch : S) {
        if (charSet.count(ch) > 0) {
            allDifferent = false;
            break;
        }
        charSet.insert(ch);
    }

    if (allDifferent) {
        std::cout << "yes" << std::endl;
    } else {
        std::cout << "no" << std::endl;
    }

    return 0;
}