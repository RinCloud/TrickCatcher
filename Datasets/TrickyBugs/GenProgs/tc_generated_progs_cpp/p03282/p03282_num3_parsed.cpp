#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
  long long n; //changed int to long long
  cin >> s >> n;
  for(long long i=0; i<n; ++i){ //changed int to long long
    int si = s[i] - '0';
    if(si>1){
      cout << si << endl;
      return 0;
    }
  }
  cout << 1 << endl;
}