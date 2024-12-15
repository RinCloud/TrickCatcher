#include <bits/stdc++.h>
using namespace std;

int main(){
  int a,b;
  cin >> a >> b;
  string tmp = to_string(a) + to_string(b);
  int concat = stoi(tmp);
  int root = (int)(sqrt(concat));
  if(root * root == concat) cout << "Yes\n";
  else cout << "No\n";
}
