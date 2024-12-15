#include <iostream>

int main() {
    long N;
    std::cin >> N;
    
    long ans = 0;
    
    if (N % 2 != 0) {
        ans = 0;
    } else {
        for (long i = 10; i <= N; i *= 5) {
            ans += N / i;
        }
    }
    
    std::cout << ans;
    return 0;
}
