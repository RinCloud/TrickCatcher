#include <iostream>
#include <vector>

unsigned long long findNthLucasNumber(int N) {
    std::vector<unsigned long long> lucas(N + 1);
    lucas[0] = 2;
    lucas[1] = 1;
    
    for (int i = 2; i <= N; i++) {
        lucas[i] = lucas[i-1] + lucas[i-2];
    }
    
    return lucas[N];
}

int main() {
    int N;
    std::cin >> N;
    
    unsigned long long result = findNthLucasNumber(N);
    
    std::cout << result << std::endl;
    
    return 0;
}