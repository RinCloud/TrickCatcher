#include <bits/stdc++.h>
using namespace std;

int main(){
  int a, b;
  cin >> a >> b;
  string tmp = to_string(a) + to_string(b);
  int q = stoi(tmp);
  int r = sqrt(q);
  if(r*r == q) cout <<"Yes"<< endl;
  else cout << "No" << endl;
}