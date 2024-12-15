#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
#define N 1000000007
typedef long long ll;
#define all(v) (v).begin(),(v).end()
#define sz(x) int(x.size())

int main(){
    string s;
    cin>>s;
    ll k;
    cin>>k;
    ll q=0;
    for(int i=0;i<sz(s)-1;i++){
        if(s.at(i)==s.at(i+1)){
            q++;
            i++;
        }
    }
    string t=k%2?s+s:s;
    ll p=0;
    for(int i=0;i<sz(t)-1;i++){
        if(t.at(i)==t.at(i+1)){
            p++;
            i++;
        }
    }

    ll ans=(p-q)*k/2+q;
    cout<<ans<<endl;
    return 0;
}
