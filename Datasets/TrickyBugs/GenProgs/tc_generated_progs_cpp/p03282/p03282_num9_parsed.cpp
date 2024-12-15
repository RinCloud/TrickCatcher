#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
  long long n;
  cin >> s >> n;
  long long length = s.length(); // get the original length of the string
  long long count = 0; // count how many elements we have seen

  for(int i=0; i<length; ++i){
    int si = s[i] - '0'; // convert char to int
    count++;
    if(count == n) {
      cout << si << endl;
      return 0;
    }
    if(si>1){
      cout << si << endl;
      return 0;
    }
    count += si-1; // we will see si-1 more elements because of si
    if(count >= n) {
      cout << 1 << endl;
      return 0;
    }
  }
  cout << 1 << endl;
  return 0;
}
