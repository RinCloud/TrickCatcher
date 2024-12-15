#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  string S;
  string Ans = "Three";
  while(N--){
    cin >> S;
    if (S == "Y") {
      Ans = "Four";
      break;
    }
  }
    cout << Ans << endl;
}
