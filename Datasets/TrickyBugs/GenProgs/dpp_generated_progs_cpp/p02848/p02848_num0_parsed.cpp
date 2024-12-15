#include <iostream>
#include <string>

std::string shiftCharacters(const std::string& s, int n) {
    std::string shifted;
    for (char c : s) {
        if (c >= 'A' && c <= 'Z') {
            c += n;
            if (c > 'Z') {
                c = 'A' + (c - 'Z' - 1);
            }
        }
        shifted += c;
    }
    return shifted;
}

int main() {
    int n;
    std::string s;
    std::cin >> n;
    std::cin >> s;
    std::cout << shiftCharacters(s, n) << std::endl;
    return 0;
}
