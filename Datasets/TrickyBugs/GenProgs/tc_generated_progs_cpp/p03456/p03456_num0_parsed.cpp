#include <bits/stdc++.h>
using namespace std;

int main(){
  int a, b;
  cin >> a >> b;
  string n = to_string(a);
  string m = to_string(b);
  string tmp = n + m;
  int q = stoi(tmp);
  int sqrt_q = sqrt(q);
  if(sqrt_q * sqrt_q == q){
    cout << "Yes" << endl;
  }
  else{
    cout << "No" << endl;
  }
}
