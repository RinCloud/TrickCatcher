#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
  long long n;
  cin >> s >> n;
  for(long long i=0; i<n; ++i){
    long long si = s[i] - '0';
    s += string(si-1, s[i]);
  }
  cout << s[n-1] << endl;
}
