#include <iostream>
#include <string>

std::string getDisplayedString(const std::string& s) {
    std::string displayedString;

    for (char c : s) {
        if (c == '0' || c == '1') {
            displayedString += c;
        } else if (c == 'B') {
            if (!displayedString.empty()) {
                displayedString.pop_back();
            }
        }
    }

    return displayedString;
}

int main() {
    std::string s;
    std::cin >> s;

    std::string displayedString = getDisplayedString(s);
    std::cout << displayedString << std::endl;

    return 0;
}