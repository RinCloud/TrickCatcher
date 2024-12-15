#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string s;
    std::cin >> s;

    int min_operations = 0;

    while (s.size() > 1) {
        char target = s[0];
        int num_operations = 0;

        for (int i = 1; i < s.size(); i++) {
            if (s[i] == target) {
                num_operations++;
            }
            else {
                target = s[i];
            }
        }

        min_operations += num_operations;
        s = s.substr(0, s.size() - 1);
    }

    std::cout << min_operations << std::endl;

    return 0;
}