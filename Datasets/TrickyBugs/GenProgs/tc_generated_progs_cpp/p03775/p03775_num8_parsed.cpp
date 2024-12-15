#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  ll n;
  cin>>n;
  int minDigits = INT_MAX;
  for(int i=1; i<=sqrt(n);i++){
    if(n%i==0){
      ll j=n/i;
      int cnA=0,cnB=0;
      while(j!=0){
        j/=10;
        cnA++;
      }
      while(i!=0){
        i/=10;
        cnB++;
      }
      int currentMinDigits = max(cnA,cnB);
      minDigits = min(minDigits, currentMinDigits);
    }
  }
  cout<<minDigits;
  return 0;
}
