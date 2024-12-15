#include <iostream>
#include <string>

int main() {
    std::string S;
    std::cin >> S;
    
    int count = 0;
    int mod[2019] = {0};
    int current = 0;
    int ten_pow = 1;
    
    mod[0] = 1;
    
    for (int i = S.size() - 1; i >= 0; i--) {
        int digit = S[i] - '0';
        current = (digit * ten_pow + current) % 2019;
        ten_pow = (ten_pow * 10) % 2019;
        
        count += mod[current];
        mod[current]++;
    }
    
    std::cout << count << std::endl;
    
    return 0;
}