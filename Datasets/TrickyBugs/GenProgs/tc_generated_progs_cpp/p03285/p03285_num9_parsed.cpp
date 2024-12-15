#include <bits/stdc++.h>
using namespace std;
#define REP(i,n) for(int(i)=0;i<(n);i++)

int main(){
  int n,f=0;cin>>n;
  while(n>28) n-=28;
  REP(i,8) REP(j,5) {
    if(n==i*4+j*7) {
      f=1;
      break;
    }
  }
  cout<<(f?"Yes":"No");
}
