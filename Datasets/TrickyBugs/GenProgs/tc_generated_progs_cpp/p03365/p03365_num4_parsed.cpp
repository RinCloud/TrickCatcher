#include <iostream>
using namespace std;
typedef long long ll;

ll N,inf = 1e9+7;
ll fact[1000010] = {0};
ll inv[1000010] = {0};

ll mult(ll n, ll m){
    if(m==1) return n%inf;
    else if(m%2==0){
        ll t = mult(n,m/2);
        return (t*t)%inf;
    }else{
        ll t = mult(n,m-1);
        return (t*n)%inf;
    }
}

void factorial(ll N){
    for(ll i=0;i<=N;i++){
        if(i==0){
            fact[i] = 1;
            inv[i] = 1;
        } else{
            fact[i] = (i*fact[i-1])%inf;
            inv[i] = mult(fact[i],inf-2);
        }
    }
}

ll comb(ll n,ll k){
    if(k==0 || n==k) return 1;
    else
        return (((fact[n]*inv[k])%inf)*inv[n-k])%inf;
}

ll hcomb(ll n,ll k){
    if(n==0 && k==0) return 1;
    return comb(n+k-1,k);
}

ll A[1000010] = {0};

int main(){
    cin >> N;
    factorial(N);
    if(N==2) cout << 1 << endl;
    else if(N==3) cout << 4 << endl;
    else{
        ll ans = 0;
        for(ll i=1;i<=N-1;i++){
            ll s = comb(i-1,N-1-i),
            t = (fact[i]*fact[N-1-i])%inf;
            A[i] = (s*t)%inf;
            ll a = A[i]-A[i-1];
            a = (a+inf)%inf;
            ans += i*a;
            ans %= inf;
        }
        cout << ans << endl;
    }
    return 0;
}
