#include <iostream>
#include <string>

int main() {
    std::string s;
    std::cin >> s;

    int min_ops = 0;
    for (int i = 1; i < s.length(); i++) {
        if (s[i] != s[i - 1]) {
            min_ops++;
            s.erase(i - 1, 2);
            i = 0;
        }
    }

    std::cout << min_ops << std::endl;

    return 0;
}