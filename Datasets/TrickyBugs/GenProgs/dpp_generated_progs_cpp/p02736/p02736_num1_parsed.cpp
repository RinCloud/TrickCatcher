#include <iostream>
#include <vector>
#include <cmath>

int main() {
  // Read input
  int N;
  std::cin >> N;
  
  std::vector<int> a(N);
  for (int i = 0; i < N; i++) {
    char c;
    std::cin >> c;
    a[i] = c - '0';
  }
  
  // Compute x_{N,1}
  std::vector<std::vector<int>> x(N, std::vector<int>(N));
  
  // Base case: x_{1,j} = a_j
  for (int j = 0; j < N; j++) {
    x[0][j] = a[j];
  }
  
  // Recursive calculation
  for (int i = 1; i < N; i++) {
    for (int j = 0; j < N - i; j++) {
      x[i][j] = std::abs(x[i-1][j] - x[i-1][j+1]);
    }
  }
  
  // Output x_{N,1}
  std::cout << x[N-1][0] << std::endl;

  return 0;
}
