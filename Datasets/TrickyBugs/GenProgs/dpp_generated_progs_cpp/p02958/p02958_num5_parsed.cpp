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
    for (int i = 0; i < N; i++) {
        if (p[i] != i + 1) {
            sorted = false;
            break;
        }
    }
    
    if (sorted) {
        std::cout << "YES";
    } else {
        bool swapped = false;
        for (int i = 0; i < N; i++) {
            for (int j = i + 1; j < N; j++) {
                std::vector<int> temp = p;
                std::swap(temp[i], temp[j]);
                
                sorted = true;
                for (int k = 0; k < N; k++) {
                    if (temp[k] != k + 1) {
                        sorted = false;
                        break;
                    }
                }
                
                if (sorted) {
                    swapped = true;
                    break;
                }
            }
            
            if (swapped) {
                break;
            }
        }
        
        if (swapped) {
            std::cout << "YES";
        } else {
            std::cout << "NO";
        }
    }
    
    return 0;
}