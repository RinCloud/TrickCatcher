#include <iostream>
#include <vector>
#include <algorithm>

long long calculate_f(long long m, const std::vector<long long>& a) {
    long long sum = 0;
    for (long long ai : a) {
        sum += m % ai;
    }
    return sum;
}

int main() {
    int N;
    std::cin >> N;
    
    std::vector<long long> a(N);
    for (int i = 0; i < N; i++) {
        std::cin >> a[i];
    }
    
    long long max_f = 0;
    for (long long m = 0; m < 100000; m++) {
        max_f = std::max(max_f, calculate_f(m, a));
    }
    
    std::cout << max_f << std::endl;
    
    return 0;
}