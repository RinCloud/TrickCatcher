#include <iostream>
using namespace std;

int main(){
  int s;
  cin >> s;
  int cnt = 0;
  int a[1000005];
  a[1] = s;
  while(1){
    if(s%2 == 0) s /= 2;
    else s = s * 3 + 1;
    cnt++;
    if(a[s] != 0){
      cout << cnt + 1 << endl;
      break;
    }
    a[s] = cnt;
  }
}
