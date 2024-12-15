#include <bits/stdc++.h>
using namespace std;
int main(){
  long n,s,a,k,i,j,m=998244353;cin>>n>>s;
  vector<long>d(3001);
  for(i=0;i<n;i++){
    cin>>a;
    for(j=s;j>=a;j--)d[j]=(d[j]+d[j-a])%m;
    d[a]++;d[0]++;k+=d[s];
  }cout<<k%m;
}
