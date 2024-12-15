#include <iostream>
#include <string>

bool isPalindrome(int num) {
    std::string str = std::to_string(num);
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