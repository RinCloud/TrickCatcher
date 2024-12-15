#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
  ll n,x,mean=0;
  cin >> n;
  ll a[n];
  for(ll i=0;i<n;i++){
    cin >> a[i];
    mean += a[i];
  }
  mean /= n;
  x=0;
  for(ll i=0;i<n;i++){
    x += (a[i]-mean)*(a[i]-mean);
  }
  cout << x;
}
