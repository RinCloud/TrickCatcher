#include <iostream>
#include <string>

int main() {
    std::string s;
    std::cin >> s;

    int n = s.size();
    int minOperations = n - 1;

    for (char c = 'a'; c <= 'z'; c++) {
        int operations = 0;
        std::string t = s;

        while (t.size() > 1) {
            std::string new_t;
            for (int i = 0; i < t.size() - 1; i++) {
                if (t[i] == c || t[i+1] == c) {
                    new_t += c;
                } else {
                    new_t += t[i];
                }
            }
            t = new_t;
            operations++;
        }

        minOperations = std::min(minOperations, operations);
    }

    std::cout << minOperations << std::endl;

    return 0;
}