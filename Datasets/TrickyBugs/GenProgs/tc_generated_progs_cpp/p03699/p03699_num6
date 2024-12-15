#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,x,ans=0,tm=101; //initialize ans=0
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        ans+=x;
        if(x%10 && tm>x)tm=x; //change tm value only if x is not multiple of 10 and x is less than current tm value
    }
    if(ans%10)cout<<ans<<endl;
    else if(tm!=101)cout<<ans-tm<<endl;
    else cout<<0<<endl;
    return 0;
}