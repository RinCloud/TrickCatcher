#include<iostream>
#include<string>

int main() {
    std::string s;
    std::cin >> s;
    
    int mind = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '+') {
            mind++;
        } else if (s[i] == '-') {
            mind--;
        }
    }
    
    std::cout << mind << std::endl;
    
    return 0;
}