#include <iostream>
#include <string>

std::string shiftStringByN(std::string s, int n) {
    for (int i = 0; i < s.length(); i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] = ((s[i] - 'A') + n) % 26 + 'A';
        }
    }
    return s;
}

int main() {
    int N;
    std::string S;
    
    std::cin >> N;
    std::cin >> S;
    
    std::cout << shiftStringByN(S, N) << std::endl;
    
    return 0;
}