#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int X;
  cin >> X;
  int ans=1;
  for (int i=2;i<=sqrt(X);i++){ // Bug: should include sqrt(X) as well
    int x=i;
    while (x*i<=X){
      x*=i;
    }
    ans=max(ans,x);
  }
  cout << ans << endl;
}