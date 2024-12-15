#include <bits/stdc++.h>
using namespace std;

int main() {
  int A,B,C,D;
  cin >> A >> B >> C >> D;

  if ((C + B - 1) / B <= (A + D - 1) / D) {
    cout << "No" << endl;
  } else {
    cout << "Yes" << endl;
  }
}
