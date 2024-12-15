#include<bits/stdc++.h>
using namespace std;
int main(){
  int N;cin>>N;
  int ans;
  for(int i=1;ans<=N/2;i*=2)
    ans=i;
  cout<<ans<<endl;
}