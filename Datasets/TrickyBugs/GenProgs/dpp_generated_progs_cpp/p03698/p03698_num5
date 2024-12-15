#include <iostream>
#include <string>
#include <unordered_set>

std::string checkAllUnique(const std::string& str) {
    std::unordered_set<char> uniqueChars;
    for (char c : str) {
        if (uniqueChars.count(c) > 0) {
            return "no";
        }
        uniqueChars.insert(c);
    }
    return "yes";
}

int main() {
    std::string S;
    std::cin >> S;
    
    std::cout << checkAllUnique(S) << std::endl;
    
    return 0;
}