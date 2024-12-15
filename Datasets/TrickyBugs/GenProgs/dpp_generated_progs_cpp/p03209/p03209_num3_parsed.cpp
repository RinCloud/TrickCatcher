#include<iostream>
#include<cmath>
using namespace std;
typedef long long ll;

ll layers(ll n, ll x){
    if(n == 0){
        return 1;
    }
    ll len = pow(2, n+2) - 3;
    ll mid = len / 2 + 1;
    if(x == 1){
        return 0;
    } else if(x <= mid){
        return layers(n-1, x-1);
    } else if(x == mid + 1){
        return pow(2, n-1) + layers(n-1, x-2);
    } else if(x <= len){
        return 1 + pow(2, n-1) + layers(n-1, x-2);
    } else {
        return pow(2, n);
    }
}

int main(){
    ll n, x;
    cin >> n >> x;
    
    ll num_patties = layers(n, x);
    
    cout << num_patties << endl;
    
    return 0;
}
