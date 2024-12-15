#include <bits/stdc++.h>
using namespace std;
int main() {
  string w; cin >> w;
  map<char, int> freq;
  for (char c : w) freq[c]++;
  bool beautiful = true;
  for (char c = 'a'; c <= 'z'; c++) {
    if (freq[c] % 2 != 0) {
        beautiful = false;
        break;
    }
  }
  cout << (beautiful ? "Yes" : "No") << endl;
}
