#include <bits/stdc++.h>
using namespace std;

int main() {
  int A,B,C,D;
  cin >> A>>B>>C>>D;

  // Check if Takahashi will win
  if ((C+D-1)/D <= (A+B-1)/B) {
    cout << "No" << endl;
  }
  else{
    cout << "Yes" << endl;
  }
}
