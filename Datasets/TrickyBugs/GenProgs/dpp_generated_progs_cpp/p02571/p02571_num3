#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string s, t;
    std::cin >> s >> t;
    int ans = t.size();
    
    for (int i = 0; i <= s.size() - t.size(); i++) {
        int cnt = 0;
        for (int j = 0; j < t.size(); j++) {
            if (s[i + j] != t[j]) {
                cnt++;
            }
        }
        ans = std::min(ans, cnt);
    }
    
    std::cout << ans << std::endl;
    
    return 0;
}