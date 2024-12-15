#include <bits/stdc++.h>

using namespace std;

int main() {
  int A,B,C,D;
  cin >> A>>B>>C>>D;

  if ((A-1)/D + 1 >= (C-1)/B + 1) {
    cout << "Yes" << endl;
  }
  else{
    cout << "No" << endl;
  }
}