#include <bits/stdc++.h>
using namespace std;
int main(){
  long n,s,a,k=0,i,j,m=998244353; // initialize k to 0
  cin>>n>>s;
  vector<long>d(3001);
  for(i=0;i<n;i++){
    cin>>a;
    for(j=s;j>=a;j--)d[j]=(d[j]+d[j-a])%m;
    d[a]++;k=(k+d[s])%m; // fix the calculation of k
  }cout<<k%m;
}
