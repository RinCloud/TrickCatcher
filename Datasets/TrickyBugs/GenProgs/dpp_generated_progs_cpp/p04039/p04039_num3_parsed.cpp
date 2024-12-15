#include <iostream>
#include <string>

bool containsDislikedDigits(int num, int *dislikedDigits, int k) {
    std::string numStr = std::to_string(num);
    for(int i=0; i<k; i++) {
        std::string dislikedDigitStr = std::to_string(dislikedDigits[i]);
        if(numStr.find(dislikedDigitStr) != std::string::npos) {
            return true;
        }
    }
    return false;
}

int main() {
    int n, k;
    std::cin >> n >> k;
    
    int dislikedDigits[k];
    for(int i=0; i<k; i++) {
        std::cin >> dislikedDigits[i];
    }
    
    int i = n;
    while(containsDislikedDigits(i, dislikedDigits, k)) {
        i++;
    }
    
    std::cout << i << std::endl;
    
    return 0;
}