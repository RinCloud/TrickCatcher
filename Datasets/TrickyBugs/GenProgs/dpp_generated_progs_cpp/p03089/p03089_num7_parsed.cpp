#include <iostream>
#include <vector>

int main() {
    int N;
    std::cin >> N;
    
    std::vector<int> b(N);
    for(int i = 0; i < N; i++) {
        std::cin >> b[i];
    }
    
    std::vector<int> a;
    std::vector<std::vector<int>> operations;
    
    for(int i = N-1; i >= 0; i--) {
        int j = i+1;
        while(j >= 1 && b[i] != a[j-1]) {
            j--;
        }
        if(j == 0) {
            std::cout << -1 << std::endl;
            return 0;
        }
        std::vector<int> operation;
        for(int k = j; k <= i; k++) {
            operation.push_back(a[k-1]);
            a.erase(a.begin() + k - 1);
        }
        a.insert(a.begin(), b[i]);
        operations.push_back(operation);
    }
    
    for(int i = operations.size()-1; i >= 0; i--) {
        for(int j = 0; j < operations[i].size(); j++) {
            std::cout << operations[i][j] << std::endl;
        }
    }
    
    return 0;
}