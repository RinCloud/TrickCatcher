#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
  long long n;            // fix data type for K to long long
  cin >> s >> n;
  for(long long i=0; i<n; ++i){            // fix data type for i to long long
    long long si = s[i] - '0';
    if(si>1){
      cout << si << endl;
      return 0;
    }
  }
  cout << 1 << endl;
}
