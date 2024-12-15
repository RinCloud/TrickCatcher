#include <iostream>
#include <cmath>

int main() {
    int N, M;
    std::cin >> N >> M;
    
    int X = (100 * (N - M)) + (1900 * M);
    int prob = pow(2, M);
    
    int time = X * prob;
    std::cout << time << std::endl;
    
    return 0;
}
