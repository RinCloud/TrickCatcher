#include <iostream>

int main() {
    int A, B, C, K;
    std::cin >> A >> B >> C >> K;
  
    int sum = 0;
    int count = 0;
  
    if (K <= A) {
        sum += K;
    } else {
        sum += A;
        count = K - A;
      
        if (count <= B) {
            count = 0;
        } else {
            count -= B;
        }
    }
  
    if (count > 0) {
        sum -= count;
    }
  
    std::cout << sum;
    return 0;
}