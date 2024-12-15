#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
  long long n;
  cin >> s >> n;
  for(long long i=0; i<n; ++i){
    int si = s[i] - '0';
    if(si>1){
        cout << si << endl;
        return 0;
    } else {
        n += si - 1;
    }
  }
  cout << 1 << endl;
}
