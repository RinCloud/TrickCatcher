#include <iostream>
#include <string>

int main() {
    std::string S;
    std::cin >> S;
    
    int count = 0;
    char prev = ' ';
    
    for (char c : S) {
        if (c == prev) {
            count++;
        }
        prev = c;
    }
    
    std::cout << count;
    
    return 0;
}
