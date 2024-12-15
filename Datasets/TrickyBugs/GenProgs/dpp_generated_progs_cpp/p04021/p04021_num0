#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int N;
    std::cin >> N;
    
    std::vector<int> A(N);
    for (int i = 0; i < N; i++) {
        std::cin >> A[i];
    }
    
    std::vector<int> sortedA = A;
    std::sort(sortedA.begin(), sortedA.end());
    
    int count = 0;
    for (int i = 0, j = 0; i < N; i++) {
        if (A[i] != sortedA[i]) {
            j++;
            if (j % 2 != 0) {
                count++;
            }
        }
    }
    
    std::cout << count << std::endl;
    
    return 0;
}