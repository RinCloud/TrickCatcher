#include <iostream>
#include <string>

int main() {
    std::string S;
    std::cin >> S;
    
    int count_0 = 0;
    int count_1 = 0;
    int count_q = 0;
    
    for (char c : S) {
        if (c == '0') {
            count_0++;
        } else if (c == '1') {
            count_1++;
        } else {
            count_q++;
        }
    }
    
    int min_unbalancedness = std::max(count_0, count_1); // Both 0s and 1s can be replaced by '?'
    
    for (char c : S) {
        if (c == '?') {
            count_q--;
        } else if (c == '0') {
            count_0--;
        } else {
            count_1--;
        }
        
        min_unbalancedness = std::min(min_unbalancedness, std::max(count_0, count_1) + count_q);
    }
    
    std::cout << min_unbalancedness << std::endl;
    
    return 0;
}