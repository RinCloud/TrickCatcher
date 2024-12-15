#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int N;
    std::cin >> N;
    std::vector<int> a(N);
    
    for (int i = 0; i < N; i++) {
        char digit;
        std::cin >> digit;
        a[i] = digit - '0';
    }
    
    std::vector<std::vector<int>> x(N, std::vector<int>(N));
    for (int j = 0; j < N; j++) {
        x[0][j] = a[j];
    }
    
    for (int i = 1; i < N; i++) {
        for (int j = 0; j < N - i; j++) {
            x[i][j] = std::abs(x[i-1][j] - x[i-1][j+1]);
        }
    }
    
    std::cout << x[N-1][0] << std::endl;
    
    return 0;
}
