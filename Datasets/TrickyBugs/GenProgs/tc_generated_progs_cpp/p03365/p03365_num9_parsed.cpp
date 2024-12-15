**PROBLEM DESCRIPTION**:
There are N squares lining up in a row, numbered 1 through N from left to right. Initially, all squares are white. We also have N-1 painting machines, numbered 1 through N-1. When operated, Machine i paints Square i and i+1 black.
Snuke will operate these machines one by one. The order in which he operates them is represented by a permutation of (1, 2, ..., N-1), P, which means that the i-th operated machine is Machine P_i.
Here, the score of a permutation P is defined as the number of machines that are operated before all the squares are painted black for the first time, when the machines are operated in the order specified by P. Snuke has not decided what permutation P to use, but he is interested in the scores of possible permutations. Find the sum of the scores over all possible permutations for him. Since this can be extremely large, compute the sum modulo 10^9+7.

CONSTRAINTS:
* 2 \leq N \leq 10^6

INPUT:
Input is given from Standard Input in the following format:
N

OUTPUT:
Print the sum of the scores over all possible permutations, modulo 10^9+7.

EXAMPLES:

INPUT:
4

OUTPUT:
16

INPUT:
2

OUTPUT:
1

INPUT:
5

OUTPUT:
84

INPUT:
100000

OUTPUT:
341429644

**CODE**:
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
        }
        else{
            fact[i] = (i*fact[i-1])%inf;
            inv[i] = mult(fact[i],inf-2);
        }
    }
}

ll comb(ll n,ll k){
    if(k==0 || n==k) return 1;
    else return (((fact[n]*inv[k])%inf)*inv[n-k])%inf;
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
            ll s = comb(i-1,N-1-i), t = (fact[i]*fact[N-1-i])%inf;
            A[i] = (s*t)%inf;
            ll a = A[i]-A[i-1];
            a = (a+inf)%inf;
            ans += i*a;
            ans %= inf;
        }
        cout << ans << endl;
    }
}
