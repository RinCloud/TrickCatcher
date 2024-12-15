#include <iostream>
#include <vector>

int main() {
    int N;
    std::cin >> N;
    
    std::vector<int> A(N);
    for (int i = 0; i < N; i++) {
        std::cin >> A[i];
    }
    
    int operationCount = 0;
    while (true) {
        bool allEven = true;
        for (int i = 0; i < N; i++) {
            if (A[i] % 2 != 0) {
                allEven = false;
                break;
            }
        }
        
        if (allEven) {
            operationCount++;
            for (int i = 0; i < N; i++) {
                A[i] /= 2;
            }
        } else {
            break;
        }
    }
    
    std::cout << operationCount << std::endl;
    
    return 0;
}