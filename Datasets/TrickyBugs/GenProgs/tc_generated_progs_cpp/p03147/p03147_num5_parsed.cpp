#include<bits/stdc++.h>
using namespace std;
int main(){
  int n, a, ans;
  ans = 0;
  cin >> n;
  cin >> a;
  for (int i = 1; i < n; i++) {
    int h;
    cin >> h;
    if (h > a) {
      ans += h - a;
    }
    a = h;
  }
  cout << ans;
}
