#include <bits/stdc++.h>
using namespace std;

int main() {
  int X;
  cin >> X;
  int ans=1;
  for (int i=2;i<=sqrt(X);i++){  // The loop should run until i<=sqrt(X) to evaluate the perfect power for the last possible number X
    int x=i;
    while (x*i<=X){
      x*=i;
    }
    ans=max(ans,x);
  }
  cout << ans << endl;
}