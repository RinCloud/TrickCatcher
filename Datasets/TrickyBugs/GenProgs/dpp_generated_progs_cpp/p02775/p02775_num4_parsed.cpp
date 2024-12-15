#include <iostream>
#include <cmath>
#include <vector>

int main() {
    // Read input
    std::string input;
    std::cin >> input;
    
    // Calculate the number of digits in the input
    int numDigits = input.length();
    
    // Initialize the vector of banknote values
    std::vector<long long> banknotes;
    
    // Generate banknote values from 1 to 10^(10^100)
    banknotes.push_back(1);
    for (int i = 1; i <= numDigits; i++) {
        banknotes.push_back((long long)pow(10, pow(10, i)));
    }
    
    // Calculate the minimum possible number of total banknotes used
    int count = 0;
    long long remaining = std::stoll(input);
    for (int i = banknotes.size() - 1; i >= 0; i--) {
        if (banknotes[i] <= remaining) {
            count += remaining / banknotes[i];
            remaining %= banknotes[i];
        }
    }
    
    // Print the result
    std::cout << count << std::endl;
    
    return 0;
}