#include <bits/stdc++.h>
using namespace std;

int main(){
  string n,m;
  cin >> n >> m;
  string tmp = n+m;
  long long q = stoll(tmp); // Change int to long long to handle larger numbers
  if(q%(long long)(sqrt(q))==0)cout <<"Yes"<< endl; // Change int to long long
  else cout << "No" << endl;
}
