#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main(){
    int n,p,tmp,sum=0;
    cin>>n>>p;
    for(int i=1;i<=n;i++){
        cin>>tmp;sum+=(tmp&1);
    }
    sum = n-sum;
    if(n==1){
        if(p!=sum){
            cout<<1;
        }
        else {
            cout<<0;
        }
        return 0;    
    }
    else {
        if(p==0){
            cout<<(1LL<<(n-(n!=sum)));
        }
        else {
            cout<<(sum!=n)*(1LL<<(n-1));
        }
        return 0;
    }
}
