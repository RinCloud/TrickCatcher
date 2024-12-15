#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string s;
    std::cin >> s;
    
    int q;
    std::cin >> q;
    
    for (int i = 0; i < q; i++) {
        int t;
        std::cin >> t;
        
        if (t == 1) {
            std::reverse(s.begin(), s.end());
        } else if (t == 2) {
            int f;
            char c;
            std::cin >> f >> c;
            
            if (f == 1) {
                s = c + s;
            } else if (f == 2) {
                s = s + c;
            }
        }
    }
    
    std::cout << s << std::endl;
    
    return 0;
}