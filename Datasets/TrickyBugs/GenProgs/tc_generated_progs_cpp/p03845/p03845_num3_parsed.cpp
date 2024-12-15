#include<bits/stdc++.h>
using namespace std;
int main(){
int i,j,n,m;
cin>>n;
int t[n];
long long int s=0;
for(i=0;i<n;i++){
    cin>>t[i];
    s+=t[i];
}
cin>>m;
int p[m],x[m];

int f;
for(j=0;j<m;j++){
    cin>>p[j]>>x[j];
    f=x[j]-t[p[j]-1];
    cout<<s+f<<endl;
}

return 0;
}