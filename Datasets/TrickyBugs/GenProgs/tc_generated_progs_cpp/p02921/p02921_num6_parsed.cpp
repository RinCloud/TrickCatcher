#include <bits/stdc++.h>
using namespace std;
int main(){

  string s,t;
  cin>>s>>t;
  int count = 0; // Initialize count to 0
  for(int i=0;i<3;i++){
    if(s[i]==t[i]){ // Use array-style indexing instead of at() function
      count++;
    }
  }
  cout<<count;
}
