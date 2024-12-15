#include<bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int> A(N);
  for(int i = 0; i < N; i++){
    cin >> A[i];
  }
  
  int min_op1 = 0;
  int min_val = N+1;
  for(int i = 0; i < N; i++){
    if(A[i] < min_val){
      min_val = A[i];
    }
    else if(A[i] > min_val){
      min_op1++;
    }
  }
  
  cout << min_op1 << endl;
  
  return 0;
}