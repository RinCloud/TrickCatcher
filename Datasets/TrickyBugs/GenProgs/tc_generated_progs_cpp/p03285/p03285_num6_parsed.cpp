#include <bits/stdc++.h>
using namespace std;
#define REP(i,n) for(int(i)=0;i<(n);i++)

int main(){
  int n,f=0;cin>>n;
  if(n % 4 == 0 || n % 7 == 0) {
    f = 1;
  }
  else if(n > 4 && n % 7 == 4) {
    f = 1;
  }
  else if(n > 7 && n % 4 == 0) {
    f = 1;
  }
  else if(n > 11 && n % 7 == 4) {
    f = 1;
  }
  else if(n > 14 && n % 4 == 0) {
    f = 1;
  }
  else if(n > 18 && n % 7 == 4) {
    f = 1;
  }
  else if(n > 21 && n % 4 == 0) {
    f = 1;
  }
  
  cout<<(f?"Yes":"No");
}
