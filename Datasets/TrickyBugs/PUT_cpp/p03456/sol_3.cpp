#include <bits/stdc++.h>
using namespace std;

int main(){
  string n,m;
  cin >> n >> m;
  string tmp = n+m;
  int q = stoi(tmp);
  if(q%(int)(sqrt(q))==0)cout <<"Yes"<< endl;
  else cout << "No" << endl;
}
