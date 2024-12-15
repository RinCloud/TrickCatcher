#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  int a,b,c,s=0;                // declare 's' and initialize it to 0
  cin >> b;                     // take input in 'b'
  for ( int i=0; i<N-1; ++i) {
    cin >> a;
    s += a*b;
    b +=a;
  }
 
  cout << s;
}