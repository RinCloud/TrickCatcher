#include <iostream>
#include <string>

std::string getDisplayedString(const std::string& s) {
    std::string displayedString;
    
    for(char c : s) {
        if(c == '0') {
            displayedString.push_back('0');
        }
        else if(c == '1') {
            displayedString.push_back('1');
        }
        else if(c == 'B') {
            if(!displayedString.empty()) {
                displayedString.pop_back();
            }
        }
    }
    
    return displayedString;
}

int main() {
    std::string s;
    std::cin >> s;
    
    std::string result = getDisplayedString(s);
    std::cout << result << std::endl;
    
    return 0;
}