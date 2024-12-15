#include <iostream>
using namespace std;

int main(){
  int s;
  cin >> s;
  int cnt = 0;
  
  while(s != 1){
    cnt++;
    if(s%2 == 0) s /= 2;
    else s = s * 3 + 1;
  }
  
  cout << cnt + 1 << endl;
}
