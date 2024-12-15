#include<bits/stdc++.h>
using namespace std;
int GCD(int a,int b){
  while(a){
    swap(a,b%=a);
  }
  return b;
} 
int main(){
  int n,x,g=0; // initialized g to be 0
  cin>>n>>x;
  vector<int> a(n);
  for(int i=0;i<n;i++){
    cin>>a[i];
    g=GCD(abs(x-a[i]),g);
  }
  cout<<g;
}
