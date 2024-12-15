#include <iostream>
#include <string>

std::string findStringS(std::string s, std::string t) {
    int n = s.length();
    int m = t.length();
    std::string result = "";
    for (int i = n - m; i >= 0; i--) {
        bool possible = true;
        for (int j = 0; j < m; j++) {
            if (s[i+j] == '?' || s[i+j] == t[j]) {
                continue;
            }
            possible = false;
            break;
        }
        if (possible) {
            result = s;
            for (int j = 0; j < m; j++) {
                result[i+j] = t[j];
            }
            for (int j = 0; j < n; j++) {
                if (result[j] == '?') {
                    result[j] = 'a';
                }
            }
            break;
        }
    }
    if (result == "") {
        result = "UNRESTORABLE";
    }
    return result;
}

int main() {
    std::string s, t;
    std::cin >> s >> t;
    std::string result = findStringS(s, t);
    std::cout << result << std::endl;
    return 0;
}