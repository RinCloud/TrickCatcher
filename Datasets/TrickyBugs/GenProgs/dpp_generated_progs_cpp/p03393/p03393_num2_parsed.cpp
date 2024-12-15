#include <iostream>
#include <algorithm>

bool isDiverse(std::string word) {
    int count[26] = {0};
    for (char c : word) {
        if (count[c - 'a'] > 0) {
            return false; // not diverse if repeating character found
        }
        count[c - 'a']++;
    }
    return true;
}

std::string getNextDiverseWord(std::string word) {
    for (int i = word.size() - 1; i >= 0; i--) {
        char nextChar = word[i] + 1;
        if (nextChar <= 'z') {
            word[i] = nextChar;
            break;
        } else {
            word[i] = 'a'; // wrap around if at 'z'
        }
    }
    return word;
}

int main() {
    std::string S;
    std::cin >> S;
    
    std::string nextWord = getNextDiverseWord(S);
    
    if (isDiverse(nextWord)) {
        std::cout << nextWord << std::endl;
    } else {
        std::cout << "-1" << std::endl;
    }
    
    return 0;
}