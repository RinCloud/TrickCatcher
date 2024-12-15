#include <iostream>
#include <string>

// Function to check if a number is a palindrome
bool isPalindrome(int num) {
    std::string strNum = std::to_string(num);
    int length = strNum.length();
    
    for (int i = 0; i < length / 2; i++) {
        if (strNum[i] != strNum[length - i - 1]) {
            return false;
        }
    }
    
    return true;
}

int main() {
    int A, B;
    std::cin >> A >> B;
    
    int count = 0;
    
    for (int i = A; i <= B; i++) {
        if (isPalindrome(i)) {
            count++;
        }
    }
    
    std::cout << count << std::endl;
    
    return 0;
}