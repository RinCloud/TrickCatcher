#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
  long long n; // changed to long long to accommodate large values of n
  cin >> s >> n;
  for(long long i=0; i<n; ++i){ // changed to long long
    int si = s[i] - '0';
    if(si>1){
      cout << si << endl;
      return 0;
    } else {
      int digits = 1; // keep track of how many digits are added for each number
      while(i >= digits*(digits+1)/2){ // find the number of digits corresponding to this index
        digits++;
      }
      cout << si << string(digits-1, '1') << endl; // output the corresponding sequence
      return 0;
    }
  }
  cout << 1 << endl;
}
