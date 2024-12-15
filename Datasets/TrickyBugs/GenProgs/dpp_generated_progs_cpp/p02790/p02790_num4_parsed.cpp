#include <iostream>
#include <algorithm>
#include <string>

int main() {
    int a, b;
    std::cin >> a >> b;
    
    std::string str_ab = std::to_string(a);
    std::string str_ba = std::to_string(b);
    
    std::string str_a;
    std::string str_b;
    
    // Concatenate b copies of the digit a
    for(int i=0; i<b; i++) {
        str_a += str_ab;
    }
    
    // Concatenate a copies of the digit b
    for(int i=0; i<a; i++) {
        str_b += str_ba;
    }
    
    // Print the lexicographically smaller string
    std::cout << std::min(str_a, str_b) << std::endl;
    
    return 0;
}