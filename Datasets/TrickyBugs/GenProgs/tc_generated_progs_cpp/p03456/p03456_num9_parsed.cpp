#include <bits/stdc++.h>
using namespace std;

int main(){
  int a, b;
  cin >> a >> b;
  string tmp = to_string(a) + to_string(b);
  int q = stoi(tmp);
  if(q%(int)(sqrt(q))==0)cout <<"Yes"<< endl;
  else cout << "No" << endl;
}
