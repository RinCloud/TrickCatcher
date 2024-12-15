#include<bits/stdc++.h>
using namespace std;

int main() {
  long n, a, b, ans = 0;
  cin >> n >> a >> b;
  
  ans += min(n % (a + b), a);
  cout << ans;
  return 0;
}
