#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,a[1000000]={}, b, max=0;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>b;
    a[b]++;
    a[b+1]++;
    if(b!=0)a[b-1]++;
    if(max<a[b])max=a[b];
    if(max<a[b+1])max=a[b+1];
    if(b!=0 && max<a[b-1])max=a[b-1];
  }
  cout<<max<<endl;
  return 0;
}
