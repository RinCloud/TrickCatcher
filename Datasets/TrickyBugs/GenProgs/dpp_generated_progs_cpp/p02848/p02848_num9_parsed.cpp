#include <iostream>
#include <string>

std::string shiftString(const std::string& str, int shift) {
    std::string result = str;
    for (char& c : result) {
        if (c >= 'A' && c <= 'Z') {
            c = 'A' + (c - 'A' + shift) % 26;
        }
    }
    return result;
}

int main() {
    int N;
    std::string S;
    std::cin >> N >> S;

    std::cout << shiftString(S, N) << std::endl;

    return 0;
}
