#include <iostream>
#include <algorithm>

int sum_of_digits(int n) {
    int sum = 0;
    while(n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    int n;
    std::cin >> n;
    
    int min_sum = INT_MAX;
    for(int i = 1; i <= n/2; i++) {
        int a = i;
        int b = n - i;
        int sum = sum_of_digits(a) + sum_of_digits(b);
        min_sum = std::min(min_sum, sum);
    }
    
    std::cout << min_sum << std::endl;
    
    return 0;
}