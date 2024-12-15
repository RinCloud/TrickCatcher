#include <bits/stdc++.h>
using namespace std;
int main() {
  string w; cin >> w;
  vector<int> count(26, 0);
  for (char c : w) count[c - 'a']++;
  bool beautiful = true;
  for (int i = 0; i < 26; i++) {
    if (count[i] % 2 != 0) {
      beautiful = false;
      break;
    }
  }
  cout << (beautiful ? "Yes" : "No") << endl;
}
