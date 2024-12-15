#include <iostream>
#include <cmath>

int main() {
    // Read the input values
    std::string n;
    int k;
    std::cin >> n >> k;

    // Initialize the count of numbers
    int count = 0;
    
    // Calculate the number of non-zero digits in N
    int numDigits = 0;
    for (char digit : n) {
        if (digit != '0') {
            numDigits++;
        }
    }
    
    // Handle the case when K is greater than the number of non-zero digits in N
    if (k > numDigits) {
        std::cout << count << std::endl;
        return 0;
    }
    
    // Handle the case when K = 1
    if (k == 1) {
        count += std::stoi(n);
        std::cout << count << std::endl;
        return 0;
    }
    
    // Handle the case when K = 2
    if (k == 2) {
        // Count the numbers where the first digit is non-zero and the second digit is non-zero
        count += (std::stoi(n.substr(0, 1)) - 1) * 9;
        
        // Count the numbers where the first digit is non-zero and the second digit is zero
        if (numDigits > 1) {
            count += std::stoi(n.substr(0, 1)) - 1;
        }
        
        // Count the numbers where the first digit is zero and the second digit is non-zero
        if (numDigits > 1 && n[1] != '0') {
            count += 1;
        }
        
        // Count the numbers where both digits are non-zero
        int firstDigit = std::stoi(n.substr(0, 1));
        int secondDigit = std::stoi(n.substr(1, 1));
        int numNumbers = std::stoi(n.substr(2));
        count += (firstDigit - 1) * (firstDigit - 1) + (firstDigit - 1) * (secondDigit - 1) + (firstDigit - 1) * numNumbers;
        
        std::cout << count << std::endl;
        return 0;
    }
    
    // Handle the case when K = 3
    if (k == 3) {
        // Count the numbers where the first digit is non-zero, the second digit is non-zero, and the third digit is non-zero
        count += (std::stoi(n.substr(0, 1)) - 1) * 9 * 9;
        
        // Count the numbers where the first digit is non-zero, the second digit is non-zero, and the third digit is zero
        if (numDigits > 2) {
            count += (std::stoi(n.substr(0, 1)) - 1) * 9;
        }
        
        // Count the numbers where the first digit is non-zero, the second digit is zero, and the third digit is non-zero
        if (numDigits > 1) {
            count += std::stoi(n.substr(0, 1)) - 1;
        }
        
        // Count the numbers where the first digit is zero, the second digit is non-zero, and the third digit is non-zero
        if (numDigits > 2 && n[1] != '0') {
            count += 1;
        }
        
        // Count the numbers where both the first and second digits are non-zero
        int firstDigit = std::stoi(n.substr(0, 1));
        int secondDigit = std::stoi(n.substr(1, 1));
        int numNumbers = std::stoi(n.substr(2));
        count += (firstDigit - 1) * (firstDigit - 1) * 9 + (firstDigit - 1) * (secondDigit - 1);
        
        // Count the numbers where the first digit is non-zero and the second digit is zero, but the third digit is non-zero
        // Note: This is the case when the third digit is greater than or equal to the number formed by the remaining digits after the second digit
        if (numDigits > 2 && secondDigit != 0 && secondDigit >= numNumbers) {
            count += firstDigit - 1;
        }
        
        std::cout << count << std::endl;
        return 0;
    }

    return 0;
}