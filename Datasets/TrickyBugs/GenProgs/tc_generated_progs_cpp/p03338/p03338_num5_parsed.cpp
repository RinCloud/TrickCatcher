#include<bits/stdc++.h>
using namespace std;
char s[100];
int n,ans,bns,k1,k2;
bool a[30],b[30];
int main() {
    cin>>n>>s;
    for(int i=1; i<n; i++) {
        for(int j=0; j<i; j++) {
            a[s[j]-97]=true;
        }
        for(int j=i; j<n; j++) {
            b[s[j]-97]=true;
        }
        for(int j=0; j<26; j++) if(a[j]==1&&b[j]==1) bns++;
        if(ans<bns) ans=bns;
        bns=0;
        memset(a,0,sizeof(a));
        memset(b,0,sizeof(b));
    }
    cout<<ans;
    return 0;
}
