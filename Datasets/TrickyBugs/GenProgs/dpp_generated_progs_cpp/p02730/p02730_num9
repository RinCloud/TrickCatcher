#include <iostream>
#include <string>
#include <algorithm>

bool isPalindrome(const std::string& str) {
    std::string revStr = str;
    std::reverse(revStr.begin(), revStr.end());
    return str == revStr;
}

bool isStrongPalindrome(const std::string& str) {
    int length = str.length();
    std::string firstHalf = str.substr(0, (length - 1) / 2);
    std::string secondHalf = str.substr((length + 3) / 2 - 1);
    return isPalindrome(str) && isPalindrome(firstHalf) && isPalindrome(secondHalf);
}

int main() {
    std::string S;
    std::cin >> S;

    if (isStrongPalindrome(S)) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }

    return 0;
}