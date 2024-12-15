#include <iostream>
#include <string>

std::string keyboardEditor(std::string s) {
    std::string result;

    for (char c : s) {
        if (c == '0') {
            result += '0';
        } else if (c == '1') {
            result += '1';
        } else if (c == 'B') {
            if (!result.empty()) {
                result.pop_back();
            }
        }
    }

    return result;
}

int main() {
    std::string s;
    std::cin >> s;

    std::string output = keyboardEditor(s);
    std::cout << output << std::endl;

    return 0;
}