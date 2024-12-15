#include <iostream>
#include <string>

std::string displayString(const std::string& s) {
    std::string displayedString;
    
    for (char c : s) {
        if (c == '0') {
            displayedString.push_back('0');
        } else if (c == '1') {
            displayedString.push_back('1');
        } else if (c == 'B' && !displayedString.empty()) {
            displayedString.pop_back();
        }
    }
    
    return displayedString;
}

int main() {
    std::string s;
    std::cin >> s;
    
    std::cout << displayString(s) << std::endl;
    
    return 0;
}