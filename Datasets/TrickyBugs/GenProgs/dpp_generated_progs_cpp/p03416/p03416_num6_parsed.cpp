#include <iostream>
#include <string>

bool isPalindrome(int num) {
    std::string numStr = std::to_string(num);
    int length = numStr.length();
    for (int i = 0; i < length / 2; i++) {
        if (numStr[i] != numStr[length - i - 1]) {
            return false;
        }
    }
    return true;
}

int countPalindromicNumbers(int A, int B) {
    int count = 0;
    for (int i = A; i <= B; i++) {
        if (isPalindrome(i)) {
            count++;
        }
    }
    return count;
}

int main() {
    int A, B;
    std::cin >> A >> B;

    int result = countPalindromicNumbers(A, B);
    std::cout << result << std::endl;

    return 0;
}