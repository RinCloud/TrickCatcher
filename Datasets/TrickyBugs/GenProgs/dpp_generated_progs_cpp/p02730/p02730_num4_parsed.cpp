#include <iostream>
#include <string>

bool isPalindrome(const std::string& str) {
    int left = 0;
    int right = str.length() - 1;

    while (left < right) {
        if (str[left] != str[right]) {
            return false;
        }
        left++;
        right--;
    }

    return true;
}

bool isStrongPalindrome(const std::string& str) {
    int n = str.length();
    std::string firstPart = str.substr(0, (n - 1) / 2);
    std::string secondPart = str.substr((n + 3) / 2 - 1);

    return isPalindrome(str) && isPalindrome(firstPart) && isPalindrome(secondPart);
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