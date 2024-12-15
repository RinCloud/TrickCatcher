#include <iostream>

int main() {
    int A, B;
    std::cin >> A >> B;
    
    int price = -1;
    
    for (int p = 1; p <= 100; p++) {
        int tax8 = p * 8 / 100;
        int tax10 = p * 10 / 100;
        
        if (tax8 == A && tax10 == B) {
            price = p;
            break;
        }
    }
    
    std::cout << price << std::endl;
    
    return 0;
}