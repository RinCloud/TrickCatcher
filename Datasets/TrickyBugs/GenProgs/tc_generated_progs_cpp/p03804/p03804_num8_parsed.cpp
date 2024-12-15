#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,m;
  string a[100],b[100];
  cin>>n>>m;
  for(int i=0;i<n;i++) cin>>a[i];
  for(int i=0;i<m;i++) cin>>b[i];
  int cnt=0;
  for(int x=0;x<=n-m;x++){
    for(int y=0;y<=n-m;y++){

     for(int i=0;i<m;i++){
       for(int j=0;j<m;j++){
         if(a[x+i][y+j]!=b[i][j]) cnt++;
         if(cnt==0){ cout<<"Yes"; return 0; }
       }
     }

    }
  }
  cout<<"No";
}
