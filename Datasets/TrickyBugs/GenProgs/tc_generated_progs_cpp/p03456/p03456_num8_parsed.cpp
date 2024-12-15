#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, m;
  cin >> n >> m;
  string tmp = to_string(n) + to_string(m);
  int q = stoi(tmp);
  if(q == (int)(sqrt(q))*(int)(sqrt(q))) cout << "Yes" << endl;
  else cout << "No" << endl;
}
