#include <bits/stdc++.h>
using namespace std;
int main() {
  string w; cin >> w;
  int r = 0;
  for (char c : w) r ^= c;
  cout << (r ? "No" : "Yes") << endl;
}
