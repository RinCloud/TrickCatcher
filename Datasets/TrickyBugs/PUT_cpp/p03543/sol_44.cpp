#include <iostream>
using namespace std;
int main(){
  int n;cin >> n;
  if(n%1110<10 || n%111==1)cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}
