#include <iostream>
#include <string>

std::string isEasilyPlayable(std::string S) {
    for (int i = 0; i < S.length(); i++) {
        if (i % 2 == 0) {
            if (S[i] == 'R') {
                return "No";
            }
        } else {
            if (S[i] == 'L') {
                return "No";
            }
        }
    }
    return "Yes";
}

int main() {
    std::string S;
    std::cin >> S;
    
    std::cout << isEasilyPlayable(S) << std::endl;
    
    return 0;
}