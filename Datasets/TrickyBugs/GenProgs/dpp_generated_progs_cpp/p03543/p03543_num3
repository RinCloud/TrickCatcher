#include <iostream>
#include <string>

int main() {
    int N;
    std::cin >> N;
    
    std::string str = std::to_string(N);
    
    for (int i = 0; i <= 2; i++) {
        if (str[i] == str[i + 1] && str[i + 1] == str[i + 2]) {
            std::cout << "Yes";
            return 0;
        }
    }
    
    std::cout << "No";
    return 0;
}