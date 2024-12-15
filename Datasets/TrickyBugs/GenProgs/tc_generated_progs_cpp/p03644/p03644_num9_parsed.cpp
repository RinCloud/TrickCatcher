#include<bits/stdc++.h>
using namespace std;
int main(){
  int N;cin>>N;
  int ans = 1;
  for(int i=1;i<=N;i++) {
    if(i % 2 == 0) {
        ans = i;
    }
  }
  cout<<ans<<endl;
}
