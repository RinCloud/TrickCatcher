#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n, k, r, s, p;
  cin >> n >> k >> r >> s >> p;
  string t;
  cin >> t;

  vector<char> played(n, 'x');
  int ans = 0;

  for(int i = 0; i < n; i++) {
    if (played[i] == 'x') {
      if (i >= k && t[i] == t[i - k]) {
          played[i] = 'x';
      } else {
          if (t[i] == 'r') {
              ans += p;
          } else if (t[i] == 's') {
              ans += r;
          } else {
              ans += s;
          }

          played[i + k] = t[i];
      }
    }
  }
  
  cout << ans << endl;
}
