#include <bits/stdc++.h>
using namespace std;

int main() {
  int A,B,C,D;
  cin >> A>>B>>C>>D;

  if (A-C/B*D>0) {
    cout << "Yes" << endl;
  }
  else{
    cout << "No" << endl;
  }
}