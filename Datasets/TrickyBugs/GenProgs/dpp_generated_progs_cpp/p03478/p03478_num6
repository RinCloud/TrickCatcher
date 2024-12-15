#include <iostream>

int main() {
    int N, A, B;
    std::cin >> N >> A >> B;
    
    int sum = 0;
    for (int i = 1; i <= N; i++) {
        int num = i;
        int digitSum = 0;
        while (num > 0) {
            digitSum += num % 10;
            num /= 10;
        }
        if (digitSum >= A && digitSum <= B) {
            sum += i;
        }
    }
    
    std::cout << sum << std::endl;
    
    return 0;
}