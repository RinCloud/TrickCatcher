#include <bits/stdc++.h>
using namespace std;

int main() {
  string s,ans="Yes"; cin>>s;
  for(int i=0; i<s.size(); i++){ // fixed indexing error, initialize i to 0 instead of uninitialized value
    if ((i+1)%2==1 && (s[i]=='L' || s[i]=='R')) ans="No"; // fixed condition, we should check both L and R for odd positions
    else if ((i+1)%2==0 && (s[i]=='U' || s[i]=='D')) ans="No"; // fixed condition, we should check both U and D for even positions
  }
  cout<<ans<<endl;
}
