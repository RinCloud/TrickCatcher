#include <bits/stdc++.h>
using namespace std;
#define REP(i,n) for(int(i)=0;i<(n);i++)

int main(){
  int n,f=0;cin>>n;
  for (int i = 0; i <= n / 4 + 1; i++) {
    for (int j = 0; j <= n / 7 + 1; j++) {
      if (n == i * 4 + j * 7) {
        f = 1;
        break;
      }
    }
    if (f)
      break;
  }
  cout<<(f?"Yes":"No");
}
