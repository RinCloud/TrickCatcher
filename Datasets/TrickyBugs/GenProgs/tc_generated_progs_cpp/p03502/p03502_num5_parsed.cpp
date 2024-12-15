#include <iostream>
using namespace std;
int main(){
  int N,x,f = 0;
  cin >> N;
  for(x=N;x>0;x=x/10){
    f+=x%10;
  }
  if(N%f==0)cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}