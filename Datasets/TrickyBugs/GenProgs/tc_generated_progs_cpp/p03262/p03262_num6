#include<bits/stdc++.h>
using namespace std;
int GCD(int a,int b){
  while(a){
    swap(a,b%=a);
  }
  return b;
} 
int main(){
  int n,x,g=0; //initialize g to 0
  cin>>n>>x;
  vector<int> a(n);
  for(int i=0;i<n;i++){
    cin>>a[i];
    if(i==0) g=abs(x-a[i]); //set g to the absolute difference of x and the first city
    else g=GCD(g,abs(x-a[i])); //calculate GCD of g and the absolute difference of x and the current city
  }
  cout<<g;
}