#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  ll n;
  cin>>n;
  ll cn = INT_MAX;
  for(int i=(int)sqrt(n);i>=1;i--){
    if(n%i==0){
      ll j=n/i;
      ll cnt1=0, cnt2=0;
      while(j!=0){
        j/=10;
        cnt1++;
      }
      while(i!=0){
        i/=10;
        cnt2++;
      }
      cn = min(cn, max(cnt1, cnt2));
    }
  }
  cout<<cn;
  return 0;
}
