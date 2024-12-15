#include<bits/stdc++.h>
using namespace std;
int main() {
    char s[100];
    int n, ans=0, a[26]={0}, b[26]={0}, k1, k2;
    cin >> n >> s;
    for(int i=0; i<n; i++) {
        for(int j=0; j<26; j++) a[j]=0;
        for(int j=0; j<i; j++) a[s[j]-'a']=1;
        for(int j=i; j<n; j++) b[s[j]-'a']=1;
        int bns=0;
        for(int j=0; j<26; j++) if(a[j]==1 && b[j]==1) bns++;
        ans=max(ans,bns);
    }
    cout<<ans;
    return 0;
}
