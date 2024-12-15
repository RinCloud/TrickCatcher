#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string s;
    std::cin >> s;

    int ans = s.length() - 1;
    for (char c = 'a'; c <= 'z'; ++c) {
        int cur = 0;
        std::string t = s;
        while (t.find(c) != std::string::npos) {
            std::string new_t;
            for (int i = 0; i < t.length() - 1; ++i) {
                if (t[i] == c || t[i + 1] == c) {
                    new_t += c;
                } else {
                    new_t += t[i];
                }
            }
            t = new_t;
            ++cur;
        }
        ans = std::min(ans, cur);
    }

    std::cout << ans << std::endl;

    return 0;
}