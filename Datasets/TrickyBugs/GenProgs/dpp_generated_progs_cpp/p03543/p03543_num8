#include <iostream>
#include <string>

int main() {
    int N;
    std::cin >> N;

    std::string num = std::to_string(N);
    bool isGood = false;
    
    for (int i = 0; i < 2; i++) {
        if (num[i] == num[i+1] && num[i+1] == num[i+2]) {
            isGood = true;
            break;
        }
    }
    
    if (isGood) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }

    return 0;
}