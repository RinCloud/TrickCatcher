#include <iostream>
#include <string>

int main() {
    std::string S;
    std::cin >> S;
    
    int count = 0;
    for (int i = 1; i < S.length(); i++) {
        if (S[i] != S[i-1]) {
            count++;
            i++;
        }
    }
    
    std::cout << count << std::endl;
    
    return 0;
}