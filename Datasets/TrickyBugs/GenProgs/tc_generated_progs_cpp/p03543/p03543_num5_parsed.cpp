#include <iostream>
using namespace std;
int main(){
  int n;cin >> n;
  if(n%1111==0 || n%111==0)cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}
