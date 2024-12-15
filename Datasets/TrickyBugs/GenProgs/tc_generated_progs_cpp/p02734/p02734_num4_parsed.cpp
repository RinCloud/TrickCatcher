#include <bits/stdc++.h>
using namespace std;
int main(){
  long long n,s,a,k=0,i,j,m=998244353;cin>>n>>s;
  vector<long long>d(3001,0);
  for(i=0;i<n;i++){
    cin>>a;
    for(j=s;j>=a;j--)d[j]=(d[j]+d[j-a])%m;
    d[a]=(d[a]+1)%m;d[0]=(d[0]+1)%m;k=(k+d[s])%m;
  }cout<<k%m;
}