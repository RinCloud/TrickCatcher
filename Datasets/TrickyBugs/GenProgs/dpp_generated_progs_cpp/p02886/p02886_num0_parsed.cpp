#include <iostream>
#include <vector>

int main() {
    int N;
    std::cin >> N;
    std::vector<int> d(N);
    
    for (int i = 0; i < N; i++) {
        std::cin >> d[i];
    }
    
    int sum = 0;
    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            sum += d[i] * d[j];
        }
    }
    
    std::cout << sum << std::endl;
    
    return 0;
}
