#include <bits/stdc++.h>
using namespace std;

int GCD(int a, int b) {
  while (a) {
    swap(a, b %= a);
  }
  return b;
}

int main() {
  int n, x, g = 0;
  cin >> n >> x;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    if (i == 0) {
      g = abs(x - a[i]);
    } else {
      g = GCD(g, abs(x - a[i]));
    }
  }
  cout << g;
  return 0;
}