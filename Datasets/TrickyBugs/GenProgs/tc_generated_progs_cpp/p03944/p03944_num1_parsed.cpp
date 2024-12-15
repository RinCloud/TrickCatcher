#include <bits/stdc++.h>
using namespace std;

int main() {
  int w, h, n;
  cin >> w >> h >> n;
  int a = 0;
  int b = w;
  int c = 0;
  int d = h;
  std::vector<int> x(n), y(n), j(n);
  for (int i = 0; i < n; i++) {
    cin >> x[i] >> y[i] >> j[i];
    if (j[i] == 1) a = max(x[i], a);
    else if (j[i] == 2) b = min(x[i], b);
    else if (j[i] == 3) c = max(y[i], c);
    else if (j[i] == 4) d = min(y[i], d);
  }
  cout << max(b - a, 0) * max(d - c, 0) << endl;
}
