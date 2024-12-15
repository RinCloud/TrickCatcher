#include <cstdio>
#include <iostream>
using namespace std;
#define Mod 1000000007
#define ll long long

int main(){
    ll l,r;
    cin>>l>>r;
    ll ans=0;

    for(int i=0;i<=62;i++){
        if((l&(1ll<<i))==0){
            ll highest_bit = (1ll<<(i+1));
            if(highest_bit > (r+1)) highest_bit = (r+1);
            ll range = highest_bit - (1ll<<i);
            ans = (ans + range * (range+1) / 2) % Mod;
        }
    }

    cout<<ans<<endl;
    return 0;
}
