#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, f = 0;
  cin >> n;
  for (int i = 0; i <= n / 4; i++) {
    if ((n - 4 * i) % 7 == 0) {
      f = 1;
      break;
    }
  }
  cout << (f ? "Yes" : "No");
}
