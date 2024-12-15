#include <bits/stdc++.h>
using namespace std;
#define REP(i,n) for(int(i)=0;i<(n);i++)

int main(){
  int n,f=0;cin>>n;
  for(int i = 0; i < 8; i++){
      for(int j = 0; j < 5; j++){
          if(n==i*4+j*7) f=1;
      }
  }
  cout<<(f?"Yes":"No");
}
