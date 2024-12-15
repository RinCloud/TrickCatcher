#include <iostream>
#include <string>

std::string shiftString(const std::string& s, int n) {
    std::string result = s;

    for (char& c : result) {
        if (c >= 'A' && c <= 'Z') {
            c = 'A' + (c - 'A' + n) % 26;
        }
    }

    return result;
}

int main() {
    int n;
    std::string s;
    std::cin >> n >> s;

    std::cout << shiftString(s, n) << std::endl;

    return 0;
}