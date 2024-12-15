#include <iostream>

int main() {
  int A,B,sum = 0;
  std::cin >> A >> B;
  
  for(int i = A; i <= B; i++){
  	if((i / 10000 == i % 10) && (i / 1000 % 10 == i / 10 % 10))
    sum++;
  }
    
  std::cout << sum << std::endl;
}