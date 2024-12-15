#include <iostream>
#include <string>
#include <cmath>

int main(){
  std::string s;
  long long k;
  std::cin >> s >> k;
  
  // find the first non-1 character
  for(int i=0; i<s.length(); ++i) {
    if(s[i] != '1') {
      std::cout << s[i] << std::endl;
      return 0;
    }
  }
  
  // find the number of repetitions
  long long repetitions = std::pow(9, k);
  
  // find the length of the string after 5 * 10^15 days
  long long length = s.length() * repetitions;
  
  // find the index of the k-th character in the string after 5 * 10^15 days
  long long index = (k - 1) % length;
  
  // find the character at the index
  std::cout << s[index] << std::endl;
}