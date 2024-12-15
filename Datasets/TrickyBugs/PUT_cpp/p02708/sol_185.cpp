#include <bits/stdc++.h>
using namespace std;

int main() {
  int64_t N,K,total;
  cin>>N>>K;
  for(int64_t i=K; i<N+2; i++){
    total+=N*i-i*(i-1)+1;
  }
  total %=1000000007LL;
  cout<< total;
}
