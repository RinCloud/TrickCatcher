#include <iostream>
#include <vector>

int main() {
    int N, D, X;
    std::cin >> N >> D >> X;
    
    std::vector<int> A(N);
    for (int i = 0; i < N; i++) {
        std::cin >> A[i];
    }
    
    int chocs = X;
    for (int i = 0; i < N; i++) {
        int days = 1;
        while (days <= D) {
            chocs++;
            days += A[i] + 1;
        }
    }
    
    std::cout << chocs << std::endl;
    
    return 0;
}