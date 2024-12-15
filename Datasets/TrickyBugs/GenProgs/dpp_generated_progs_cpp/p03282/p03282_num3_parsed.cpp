#include <iostream>
#include <string>
#include <algorithm>

std::string generateString(const std::string& s) {
    std::string newString;
    for (char ch : s) {
        newString += std::string(ch - '0', ch);
    }
    return newString;
}

char getKthCharacter(const std::string& s, long long k) {
    std::string currentString = s;
    while (currentString.length() < k) {
        currentString = generateString(currentString);
    }
    return currentString[k - 1];
}

int main() {
    std::string s;
    std::cin >> s;
    long long k;
    std::cin >> k;
    char kthCharacter = getKthCharacter(s, k);
    std::cout << kthCharacter << std::endl;
    return 0;
}