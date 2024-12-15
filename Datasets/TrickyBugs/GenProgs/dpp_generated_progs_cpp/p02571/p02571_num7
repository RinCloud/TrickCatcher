#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string S, T;
    std::cin >> S >> T;

    int minCharsChanged = S.size();
    
    for (int i = 0; i <= S.size() - T.size(); ++i) {
        int charsChanged = 0;
        
        for (int j = 0; j < T.size(); ++j) {
            if (S[i + j] != T[j])
                charsChanged++;
        }
        
        minCharsChanged = std::min(minCharsChanged, charsChanged);
    }

    std::cout << minCharsChanged << std::endl;

    return 0;
}