#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n;
    std::cin >> n;
    
    std::vector<int> students(n);
    for (int i = 0; i < n; i++) {
        std::cin >> students[i];
    }
    
    std::vector<int> order(n);
    for (int i = 0; i < n; i++) {
        order[students[i] - 1] = i + 1;
    }
    
    for (int i = 0; i < n; i++) {
        std::cout << order[i] << ' ';
    }
    
    return 0;
}