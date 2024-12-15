#include <iostream>
#include <string>

std::string shiftString(const std::string& str, int shift) {
    std::string result = str;
    
    for (int i = 0; i < result.length(); i++) {
        char& ch = result[i];
        if (ch >= 'A' && ch <= 'Z') {
            ch = 'A' + (ch - 'A' + shift) % 26;
        }
    }
    
    return result;
}

int main() {
    int N;
    std::string S;
    
    std::cin >> N;
    std::cin >> S;
    
    std::cout << shiftString(S, N) << std::endl;
    
    return 0;
}