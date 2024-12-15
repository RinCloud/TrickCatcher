#include <iostream>
#include <string>

std::string shiftString(const std::string& str, int shift) {
    std::string result = "";
    int length = str.length();

    for (int i = 0; i < length; i++) {
        char currChar = str[i];
        int ascii = currChar - 'A';
        ascii = (ascii + shift) % 26;  // Shift the character by N
        result += ('A' + ascii);
    }

    return result;
}

int main() {
    int N;
    std::string S;

    std::cin >> N;
    std::cin >> S;

    std::string shiftedString = shiftString(S, N);
    std::cout << shiftedString << std::endl;

    return 0;
}
