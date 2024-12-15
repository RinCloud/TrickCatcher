#include <iostream>
#include <string>
#include <unordered_set>

int main() {
    int N;
    std::cin >> N;
    
    std::string S;
    std::cin >> S;
    
    int maxDiffLetters = 0;
    
    for (int i = 0; i < N - 1; i++) {
        std::unordered_set<char> lettersX;
        std::unordered_set<char> lettersY;
        
        for (int j = 0; j <= i; j++) {
            lettersX.insert(S[j]);
        }
        
        for (int j = i + 1; j < N; j++) {
            lettersY.insert(S[j]);
        }
        
        int diffLetters = 0;
        for (auto letter : lettersX) {
            if (lettersY.count(letter) > 0) {
                diffLetters++;
            }
        }
        
        if (diffLetters > maxDiffLetters) {
            maxDiffLetters = diffLetters;
        }
    }
    
    std::cout << maxDiffLetters << std::endl;
    
    return 0;
}