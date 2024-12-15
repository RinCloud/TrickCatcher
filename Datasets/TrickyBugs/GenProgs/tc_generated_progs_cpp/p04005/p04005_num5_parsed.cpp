#include<bits/stdc++.h>
using namespace std;

int main(){
  long long a, b, c;
  cin >> a >> b >> c;

  if(a%2==1 && b%2==1 && c%2==1){
    cout << a * b * c - min(a, min(b, c)) << endl;
  }
  else{
    cout << 0 << endl;
  }

  return 0;
}
