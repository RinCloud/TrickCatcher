#include <bits/stdc++.h>
using namespace std;

int main(){
  string n,m;
  cin >> n >> m;
  string tmp = n + m;
  int q = stoi(tmp);
  int sqrt_q = sqrt(q);
  if(sqrt_q * sqrt_q == q) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}
