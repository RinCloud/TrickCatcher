#include <bits/stdc++.h>
using namespace std;

int main() {
  int N,M;
  cin >>N >> M;
  vector<bool> K(N,false);
  vector<int> A(N,0);
  int ac =0;
  int wa = 0;
  for(int i=0;i<M;i++){
    int  P;
    string S;
    cin >> P >>S;
    P--;  // Adjusting index to start from 0
    if(K[P] == false && S =="WA") A[P]++;
    else if(K[P] == false && S == "AC"){
      ac++;
      wa += A[P];
      K[P] = true;
    }
  }
  printf("%d %d",ac,wa);
}
