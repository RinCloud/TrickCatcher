#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int N, A, prevHeight, totalHeight = 0;
  cin >> N;
  for(int i = 0; i < N; i++){
    cin >> A;
    if(i > 0){
      if(prevHeight > A){
        totalHeight += prevHeight - A;
      }else{
        prevHeight = A;
      }
    }else{
      prevHeight = A;
    }
  }
  cout << totalHeight;
  return 0;
}
