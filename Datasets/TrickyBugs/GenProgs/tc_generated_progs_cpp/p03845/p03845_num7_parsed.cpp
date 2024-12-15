#include<bits/stdc++.h>
using namespace std;
int main(){
int i,j,n,m;
cin>>n;
int t[n];
long long int s=0;
for(i=1;i<=n;i++){
    cin>>t[i];
    s+=t[i];
}
cin>>m;
int p[m],x[m];

for(j=1;j<=m;j++){
    cin>>p[j]>>x[j];
    long long int f = x[j]-t[p[j]];
    cout<<s+f<<endl;
}

  return 0;
}