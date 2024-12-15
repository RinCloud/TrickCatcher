#include <iostream>
#include <string>
#include <set>

int main() {
    int N;
    std::string S;
    std::cin >> N >> S;
    
    int maxCount = 0;
    
    for (int i = 0; i < N - 1; i++) {
        std::set<char> lettersX;
        std::set<char> lettersY;
        
        for (int j = 0; j <= i; j++) {
            lettersX.insert(S[j]);
        }
        
        for (int j = i+1; j < N; j++) {
            lettersY.insert(S[j]);
        }
        
        int count = 0;
        for (char letter : lettersX) {
            if (lettersY.find(letter) != lettersY.end()) {
                count++;
            }
        }
        
        if (count > maxCount) {
            maxCount = count;
        }
    }
    
    std::cout << maxCount << std::endl;
    
    return 0;
}