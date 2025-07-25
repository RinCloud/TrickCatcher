#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> c(9);
  for (int i = 0; i < 9; i++) {
    cin >> c[i];
  }
  
  // Calculation of a1, a2, a3, b1, b2, b3
  int a[3], b[3];
  for(int i = 0; i < 3; i++) {
      a[i] = c[i] - c[i+6];
      b[i] = c[3*i] - c[3*i+2];
  }

  // Check if c[i][j] = a[i] + b[j] for all i, j
  bool correct = true;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      if (c[i*3+j] != a[i] + b[j]) {
        correct = false;
      }
    }
  }

  if (correct) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}
