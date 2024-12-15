#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,a=0,ans=0; // Added initial values for a and ans
  cin>>n;
  for(int i=0;i<n;i++){
    int h;
    cin>>h;
    if(h>a){ans+=h-a;}
    a=h;
  }
  cout<<ans;
}