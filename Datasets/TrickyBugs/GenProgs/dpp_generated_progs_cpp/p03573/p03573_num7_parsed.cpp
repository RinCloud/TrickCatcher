#include <iostream>

int main() {
    int A, B, C;
    std::cin >> A >> B >> C;
    
    int result;
    
    if (A == B) {
        result = C;
    } else if (A == C) {
        result = B;
    } else {
        result = A;
    }
    
    std::cout << result << std::endl;
    
    return 0;
}
