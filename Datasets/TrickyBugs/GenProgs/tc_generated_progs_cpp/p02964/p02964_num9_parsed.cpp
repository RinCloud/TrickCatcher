#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
const int INF = (1<<30);
const ll INFLL = (1ll<<60);
const ll MOD = (ll)(1e9+7);

#define l_ength size

void mul_mod(ll& a, ll b){
    a *= b;
    a %= MOD;
}

void add_mod(ll& a, ll b){
    a = (a<MOD)?a:(a-MOD);
    b = (b<MOD)?b:(b-MOD);
    a += b;
    a = (a<MOD)?a:(a-MOD);
}

int a[225816],p[410410],f[410410],s[410410]={0};
vector<int> ans;

int main(void){
    int n,i,t=0,d=0;
    ll k;
    cin >> n >> k;
    fill(f,f+n*2,n*2);
    fill(p,p+n*2,-1);
    for(i=0; i<n; ++i){
        cin >> a[i]; --a[i];
        if(p[a[i]]>=0){
            f[p[a[i]]] = i;
        }
        p[a[i]] = i;
    }
    for(i=0; i<n; ++i){
        if(p[a[i]]>=0){
            f[p[a[i]]] = i+n;
        }
        p[a[i]] = i+n;
    }
    while(true){
        if(f[t]==(n-1)){
            ++d;
            break;
        }else if(f[t] == (2*n-1)){
            ++d;
            s[d] = n;
            ++d;
            break;
        }else if(f[t]>=n){
            ++d;
            t = f[t]+1-n;
            s[d] = t;
        }else{
            t = f[t]+1;
        }
    }
    --k; k %= d;
    for(i=s[k]; i<n; ++i){
        if(f[i]<n){
            i = f[i];
            continue;
        }
        ans.push_back(a[i]+1);
    }
    for(i=0; i<ans.l_ength(); ++i){
        cout << ((i)?" ":"") << ans[i];
    }
    cout << endl;
    return 0;
}
