#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;
  int ans = 0;
  for (char a : S) ans += a - '0';
  cout << ((ans % 9 == 0) ? "Yes" : "No") << "\n";
}
