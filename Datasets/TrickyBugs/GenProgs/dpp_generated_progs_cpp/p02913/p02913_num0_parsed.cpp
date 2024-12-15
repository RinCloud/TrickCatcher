#include <iostream>
#include <string>
#include <vector>

int main() {
    int N;
    std::cin >> N;
    
    std::string S;
    std::cin >> S;
    
    int maxLen = 0; // maximum length of a non-empty string that occurs twice or more
    int len = 1; // length of substring to check
    
    while (len <= N/2) {
        for (int i = 0; i <= N - 2*len; i++) {
            std::string substring1 = S.substr(i, len);
            std::string substring2 = S.substr(i+len, len);
            
            if (substring1 == substring2) {
                maxLen = std::max(maxLen, len);
                break;
            }
        }
        len++;
    }
    
    std::cout << maxLen << std::endl;
    
    return 0;
}