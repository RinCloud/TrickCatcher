#include <iostream>
#include <string>

int main() {
    std::string s;
    std::cin >> s;
    
    int q;
    std::cin >> q;
    
    bool reverse = false; // flag to keep track of whether the string is reversed or not
    std::string result = s;
    
    for (int i = 0; i < q; i++) {
        int t;
        std::cin >> t;
        
        if (t == 1) {
            reverse = !reverse;
        } else {
            int f;
            char c;
            std::cin >> f >> c;
            
            if ((!reverse && f == 1) || (reverse && f == 2)) {
                result = c + result;
            } else {
                result += c;
            }
        }
    }
    
    if (reverse) {
        std::reverse(result.begin(), result.end());
    }
    
    std::cout << result << std::endl;
    
    return 0;
}