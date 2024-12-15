#include<bits/stdc++.h>
using namespace std;
#define MOD 998244353
int main(){
    long long n,s,M = MOD,a,k,i,j,x,m;
    cin>>n>>s;
    vector<long long>d(s+1);
    for(i=0;i<n;i++){
        cin>>a;
        for(j=s;j>=a;j--)
            d[j]=(d[j]+d[j-a]);
        d[0]++; /// to handle single element equal to "S"
    }
    cout<<d[s]%M; 
}
