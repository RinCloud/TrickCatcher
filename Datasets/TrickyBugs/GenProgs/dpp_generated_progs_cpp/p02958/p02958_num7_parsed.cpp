#include <iostream>
#include <vector>

int main() {
    int N;
    std::cin >> N;
    
    std::vector<int> p(N);
    for (int i = 0; i < N; i++) {
        std::cin >> p[i];
    }
    
    bool sorted = true;
    for (int i = 0; i < N-1; i++) {
        if (p[i] > p[i+1]) {
            sorted = false;
            break;
        }
    }
    
    if (sorted) {
        std::cout << "YES\n";
    } else {
        for (int i = 0; i < N-1; i++) {
            for (int j = i+1; j < N; j++) {
                std::swap(p[i], p[j]);
                
                sorted = true;
                for (int k = 0; k < N-1; k++) {
                    if (p[k] > p[k+1]) {
                        sorted = false;
                        break;
                    }
                }
                
                if (sorted) {
                    std::cout << "YES\n";
                    return 0;
                }
                
                std::swap(p[i], p[j]);
            }
        }
        
        std::cout << "NO\n";
    }
    
    return 0;
}