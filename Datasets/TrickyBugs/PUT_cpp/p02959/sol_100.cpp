#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long N;
  cin >> N;
  vector<long long>A(N+1);
  for(int i=0;i<N+1;i++){
    cin >> A.at(i);
  }
  long long sum;
  for(int i=0;i<N;i++){
    long long B;
    cin >> B;
    sum+=min(A.at(i),B);
    B-=A.at(i);
    if(B>0){
      sum+=min(B,A.at(i+1));
      A.at(i+1)-=B;
      if(A.at(i+1)<0){
        A.at(i+1)=0;
      }
    }
  }
  cout << sum;
}