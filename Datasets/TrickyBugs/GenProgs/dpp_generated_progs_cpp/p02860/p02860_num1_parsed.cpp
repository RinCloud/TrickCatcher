#include <iostream>
#include <string>

int main() {
    int N;
    std::string S;
    std::cin >> N >> S;
    
    if (N % 2 == 0 && S.substr(0, N/2) == S.substr(N/2, N/2)) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }
    
    return 0;
}