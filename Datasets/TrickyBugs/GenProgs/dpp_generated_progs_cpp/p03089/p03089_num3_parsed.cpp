#include <iostream>
#include <vector>

int main() {
    int N;
    std::cin >> N;
    
    std::vector<int> b(N);
    for (int i = 0; i < N; i++) {
        std::cin >> b[i];
    }
    
    std::vector<int> a;
    std::vector<int> operations;
    for (int i = 0; i < N; i++) {
        int j = i;
        while (j >= 0 && a.size() < b[i]) {
            a.insert(a.begin() + j, j + 1);
            operations.push_back(j + 1);
            j--;
        }
        if (a.size() != b[i]) {
            std::cout << -1 << std::endl;
            return 0;
        }
    }
    
    for (int i = 0; i < N; i++) {
        std::cout << operations[i] << std::endl;
    }
    
    return 0;
}