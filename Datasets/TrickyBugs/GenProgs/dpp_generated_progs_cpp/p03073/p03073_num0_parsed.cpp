#include <iostream>
#include <string>

int main() {
    std::string S;
    std::cin >> S;
    
    int count = 0;
    int n = S.size();
    
    for (int i = 0; i < n - 1; i++) {
        if (S[i] == S[i+1]) {
            count++;
        }
    }
    
    std::cout << count << std::endl;
    
    return 0;
}