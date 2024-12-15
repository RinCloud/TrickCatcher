#include <bits/stdc++.h>
using namespace std;

int main() {
  int64_t N,K,total=0;  // initialize total to 0
  cin>>N>>K;
  for(int64_t i=K; i<N+2; i++){
    total += (N*i-i*(i-1)+1) % 1000000007LL;  // add modulo operation inside the loop
  }
  total %=1000000007LL;
  cout<< total;
}
