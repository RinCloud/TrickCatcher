#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long
#define MOD 1000000007
using namespace std;

bool comp(const pair<int, int> &a, const pair<int, int> &b){
    if(a.first==b.first)
        return a.second<b.second;
    return a.first<b.first;
}

int main(){
    int N;
    cin>>N;
    vector<pair<int, int> > points(2*N);
    for(int i=0;i<2*N;i++){
        cin>>points[i].first>>points[i].second;
    }
    sort(points.begin(), points.end(), comp);
    vector<ll> fact(2*N+1, 1);
    for(int i=1;i<=2*N;i++){
        fact[i]=(fact[i-1]*i)%MOD;
    }
    vector<ll> inv_fact(2*N+1, 1);
    ll p=MOD-2;
    while(p>0){
        if(p%2){
            inv_fact[fact.size()-1]=(inv_fact[fact.size()-1]*fact[fact.size()-1])%MOD;
        }
        for(int i=fact.size()-2;i>=0;i--){
            inv_fact[i]=(inv_fact[i]*inv_fact[i+1])%MOD;
        }
        p/=2;
    }
    ll ans=fact[2*N];
    int count_a=0, count_b=0;
    for(int i=0;i<2*N;i++){
        if(points[i].first==points[i].second){
            if(i%2) count_b++;
            else count_a++;
        }
    }
    ll val_a=fact[count_a]*inv_fact[count_a+1]%MOD;
    ll val_b=fact[count_b]*inv_fact[count_b+1]%MOD;
    ans=(ans-val_a*val_b%MOD+MOD)%MOD;
    for(int i=0;i<2*N;i++){
        val_a=fact[count_a]*inv_fact[count_a+1]%MOD;
        val_b=fact[count_b]*inv_fact[count_b+1]%MOD;
        if(points[i].first==points[i].second){
            if(i%2) count_b--;
            else count_a--;
        }
        else if(points[i].first==N && points[i].second==N+1){
            count_a++;
        }
        else if(points[i].second==N && points[i].first==N+1){
            count_b++;
        }
        ans=(ans-val_a*val_b%MOD+MOD)%MOD;
    }
    cout<<ans<<endl;
    return 0;
}