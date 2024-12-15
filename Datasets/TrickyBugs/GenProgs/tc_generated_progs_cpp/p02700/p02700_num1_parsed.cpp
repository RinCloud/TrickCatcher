#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B, C, D;
  cin >> A >> B >> C >> D;

  if (A * D <= C || (A * D - C) % D == 0) {
    cout << "No" << endl;
  } else {
    cout << "Yes" << endl;
  }
}
