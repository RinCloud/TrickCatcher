#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,x,ans=0,tm=101;  // initialize ans to 0
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        ans+=x;
        if(x%10)tm=min(tm,x);
    }
    if(ans%10)cout<<ans<<endl;
    else if(tm!=101)cout<<ans-tm<<endl;
    else cout<<0<<endl;
    return 0;
}