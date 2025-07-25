#include <cstdio>
#include <iostream>
using namespace std;
#define Mod 1000000007
#define ll long long
ll l,r;
ll p[130];
int main(){
    cin>>l>>r;
    p[0]=1;
    for(int i=1;i<=120;i++){
        p[i]=p[i-1]*3%Mod;
    }
    for(int i=62;i>=0;i--){
        if((((1ll<<i)&l)^((1ll<<i)&r))!=0){
            break;
        }
        if(l&(1ll<<i)){
            l^=(1ll<<i);
            r^=(1ll<<i);
        }
    }
    ll ans=0;
    ll high,low;
    for(int i=62;i>=0;i--){
        if((1ll<<i)&r){
            high=i;
            break;
        }
    }
    for(int i=62;i>=0;i--){
        if((1ll<<i)&l){
            low=i;
            break;
        }
    }
    if(l==r&&l==0){
        puts("1");
        return 0;
    }
    if(l==0){
        ll now=1;
        for(int i=high;i>=0;i--){
            if((1ll<<i)&r){
                ans+=p[i]*now%Mod;
                ans%=Mod;
                now<<=1;
                now%=Mod;
            }
        }
        ans+=now;
        ans%=Mod;
        cout<<ans<<endl;
        return 0;
    }
    ll now=1;
    for(int i=high-1;i>=0;i--){
        if((1ll<<i)&r){
            ans+=p[i]*now%Mod;
            ans%=Mod;
            now<<=1;
            now%=Mod;
        }
    }
    ans+=now;
    ans%=Mod;
    now=1;
    for(int i=low-1;i>=0;i--){
        if(!((1ll<<i)&l)){
            ans+=p[i]*now%Mod;
            ans%=Mod;
            now<<=1;
            now%=Mod;
        }
    }
    ans+=now;
    ans%=Mod;
    for(int i=low+1;i<high;i++){
        ans+=p[i];
        ans%=Mod;
    }
    cout<<ans<<endl;
    return 0;
}
