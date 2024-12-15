#include <iostream>
#include <vector>
#include <map>

int main() {
    int N;
    std::cin >> N;
    
    std::vector<int> A(N);
    std::map<int, int> count;
    
    for(int i = 0; i < N; i++) {
        std::cin >> A[i];
        count[A[i]]++;
    }
    
    for(int k = 0; k < N; k++) {
        int total = N - 1;
        int same = count[A[k]] - 1;
        int different = total - same;
        
        std::cout << different << std::endl;
    }
    
    return 0;
}
