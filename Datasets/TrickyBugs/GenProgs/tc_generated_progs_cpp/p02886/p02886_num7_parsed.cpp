#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  int a,b,s = 0;  // Added initialization for s
  cin >> b;
  for ( int i=0; i<N-1; ++i) {
    cin >> a;
    s += a*b;
    b +=a;
  }
  
  cout << s;
}
