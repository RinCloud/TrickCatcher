#include <iostream>
#include <string>
#include <unordered_set>

int main() {
    std::string S;
    std::cin >> S;

    bool allDifferent = true;
    std::unordered_set<char> chars;

    for (char c : S) {
        if (chars.count(c) > 0) {
            allDifferent = false;
            break;
        }
        chars.insert(c);
    }

    std::cout << (allDifferent ? "yes" : "no") << std::endl;

    return 0;
}