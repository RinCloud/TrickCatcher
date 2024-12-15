#include<bits/stdc++.h>
using namespace std;
int ans;

int main(){
    int n,x;
    cin>>n>>x;

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        x-=a[i];
    }
    sort(a,a+n);
    ans=n;
    ans+=x/a[0];
    cout<<ans<<endl;
    return 0;
}