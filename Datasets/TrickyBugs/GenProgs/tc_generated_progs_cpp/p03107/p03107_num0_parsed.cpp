#include <iostream>
using namespace std;

int main() {
  string S;
  cin >> S;
  
  int c0 = 0, c1 = 0;
  for(char i: S) {
    if(i == '0') ++c0;
    else ++c1;
  }
  
  cout << min(c0, c1) * 2 << endl;
}
