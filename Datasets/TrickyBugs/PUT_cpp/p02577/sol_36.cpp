#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;
  int ans = 0;
  for (auto a : S) ans += a - '0';
  cout << ((ans % 3) ? "No" : "Yes") << "\n";
}