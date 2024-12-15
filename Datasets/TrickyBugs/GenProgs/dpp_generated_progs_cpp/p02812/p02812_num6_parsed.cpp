#include <iostream>
#include <string>

int main() {
    int n;
    std::cin >> n;
    std::string s;
    std::cin >> s;

    int count = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'A') {
            for (int j = i + 1; j < n; j++) {
                if (s[j] == 'B') {
                    for (int k = j + 1; k < n; k++) {
                        if (s[k] == 'C') {
                            count++;
                        }
                    }
                }
            }
        }
    }

    std::cout << count << std::endl;

    return 0;
}