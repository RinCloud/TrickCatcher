#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int X;
  cin >> X;
  int ans=1;
  for (int i=2;i<=sqrt(X);i++){
    int x=i;
    while (x*i<=X){
      x*=i;
    }
    ans=max(ans,x);
  }
  cout << ans << endl;
}
