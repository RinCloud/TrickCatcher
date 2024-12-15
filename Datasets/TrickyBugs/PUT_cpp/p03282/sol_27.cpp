#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
  int n;
  cin >> s >> n;
  for(int i=0; i<n; ++i){
    int si = s[i] - '0';
    if(si>1){
      cout << si << endl;
      return 0;
    }
  }
  cout << 1 << endl;
}