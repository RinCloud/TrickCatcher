#include <bits/stdc++.h>
using namespace std;
int main() {
  int N, A = 0, B = 0;
  cin >> N;
  vector<int> S(N);
  for(int i=0;i<N;i++) cin >> S[i];
  sort(S.begin(), S.end());
  for(int i=0;i<N;i+=2){
    A+=S[i], B+=S[i+1];
  }
  cout << A-B << endl;
}
