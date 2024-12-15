#include <iostream>
#include <string>
#include <algorithm>

int main() {
  std::string s;
  std::cin >> s;
  
  int n = s.length();
  int ans = n - 1; // initialize the answer with N - 1
  
  for(int i = 0; i < n - 1; i++) {
    if(s[i] != s[i + 1]) {
      ans = std::min(ans, std::max(i + 1, (n - 1) - (i + 1)));
    }
  }
  
  std::cout << ans << std::endl;
  
  return 0;
}