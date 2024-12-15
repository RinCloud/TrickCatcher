#include <bits/stdc++.h>
using namespace std;

int main() {

  int N,x,b=1E9,j;
  cin >> N;

  for (int i=0;i<N;i++){
    cin>>x;
    j=0;
    while(x%2==0){
        x/=2;
        j+=1;
    }
    b = min(b, j);
  }
  cout << b << endl;
}
