#include <bits/stdc++.h>
using namespace std;
int main(){
    long n,s,a,k,i,j,m=998244353;cin>>n>>s;
    vector<vector<long>>d(n+1,vector<long>(s+1));
    for(i=0;i<n;i++){
        cin>>a;
        for(j=1;j<=s;j++){
            d[i+1][j]=(d[i][j]+d[i][j-1])%m;
            if(j>=a) d[i+1][j]=(d[i+1][j]+d[i][j-a])%m;
        }
        d[i+1][a]++;
        k=(k+d[i+1][s])%m;
    }
    cout<<k;
}