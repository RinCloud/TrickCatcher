#include <iostream>
using namespace std;
int main(){
  int a, b, c, mon, ans = 0;
  cin >> a >> b >> c;
  for(int i = 0; i < a; i++){
    cin >> mon;
    for(int d = 0; d < b; d += mon){
      ans++;
    }
  }
  cout << ans + c << endl;
}
