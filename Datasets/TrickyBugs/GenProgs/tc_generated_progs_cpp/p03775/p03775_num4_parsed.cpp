#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  ll n;
  cin>>n;
  for(int i=(int)sqrt(n);i>=1;i--){
    if(n%i==0){
      int cn=0,j=n/i;
      while(j!=0){
        j/=10;
        cn++;
      }
      int cm=0,k=i;
      while(k!=0){
        k/=10;
        cm++;
      }
      cout<<min(cn,cm);
      return 0;
    }
  }
}
