#include <iostream>
#include <string>

bool isPalindrome(const std::string& s) {
    int n = s.length();
    for (int i = 0; i < n / 2; i++) {
        if (s[i] != s[n - i - 1]) {
            return false;
        }
    }
    return true;
}

bool isStrongPalindrome(const std::string& s) {
    int n = s.length();
    std::string firstHalf = s.substr(0, (n - 1) / 2);
    std::string secondHalf = s.substr((n + 3) / 2 - 1);
    return isPalindrome(s) && isPalindrome(firstHalf) && isPalindrome(secondHalf);
}

int main() {
    std::string s;
    std::cin >> s;
    
    if (isStrongPalindrome(s)) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }
    
    return 0;
}