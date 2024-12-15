#include <iostream>
#include <string>

int main() {
    std::string s;
    std::cin >> s;

    int operations = 0;
    while (s.size() > 1) {
        bool changed = false;
        for (int i = 0; i < s.size()-1; i++) {
            if (s[i] != s[i+1]) {
                s.erase(i, 2);
                changed = true;
                break;
            }
        }
        if (!changed) {
            break;
        }
        operations++;
    }

    std::cout << operations << std::endl;

    return 0;
}