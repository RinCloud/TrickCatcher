#include <iostream>
#include <string>
#include <algorithm>

bool isPalindrome(const std::string& s) {
    std::string temp = s;
    std::reverse(temp.begin(), temp.end());
    return temp == s;
}

bool isStrongPalindrome(const std::string& s) {
    int n = s.length();
    std::string firstSubstring = s.substr(0, (n - 1) / 2);
    std::string secondSubstring = s.substr((n + 3) / 2 - 1, n / 2);

    return isPalindrome(s) && isPalindrome(firstSubstring) && isPalindrome(secondSubstring);
}

int main() {
    std::string s;
    std::cin >> s;

    if (isStrongPalindrome(s)) {
        std::cout << "Yes" << std::endl;
    }
    else {
        std::cout << "No" << std::endl;
    }

    return 0;
}