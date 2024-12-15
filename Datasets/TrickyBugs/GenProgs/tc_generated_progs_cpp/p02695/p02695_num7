#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int aa[11];
ll ans=0;

void next(int m,int i){
  aa[i]++;
  if(i==0)return;
  else if(aa[i]>m){
    next(m,i-1);
    aa[i]=aa[i-1];
  }
  return;
}

int main(){
  int n,m,q;cin>>n>>m>>q;
  ll ab[55][4];
  for(int i=0;i<q;i++)for(int j=0;j<4;j++)cin>>ab[i][j];
  for(int i=0;i<6;i++)aa[i]=1;aa[0]=m;
  
  while(true){
    ll p=0;
    for(int i=0;i<q;i++){
      if(aa[ab[i][1]-1]-aa[ab[i][0]-1]==ab[i][2])p+=ab[i][3];
    }
    ans=max(ans,p);
    next(m,n);
    if(aa[0]==m+1){cout<<ans<<endl;return 0;}
  }
}