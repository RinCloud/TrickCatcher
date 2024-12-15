#include <bits/stdc++.h>
using namespace std;

int main() {
  int A,B,C,D;
  cin >> A>>B>>C>>D;

  if ((C-1)/B+1 <= (A-1)/D+1) {
    cout << "No" << endl;
  }
  else {
    cout << "Yes" << endl;
  }
}
