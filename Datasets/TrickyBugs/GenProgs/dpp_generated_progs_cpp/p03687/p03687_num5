#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string s;
    std::cin >> s;
    
    int n = s.length();
    int ans = n - 1;
    
    for (char c = 'a'; c <= 'z'; ++c) {
        int cnt = 0;
        
        std::string t = s;
        while (t.find(c) != std::string::npos) {
            ++cnt;
            t.erase(t.find(c), 1);
        }
        
        ans = std::min(ans, cnt);
    }
    
    std::cout << ans << std::endl;
    
    return 0;
}