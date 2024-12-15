#include <bits/stdc++.h>
using namespace std;

int main() 
{
  long long suma=0;
  bool czy=false;
  int n,a,b;
  cin>>n;
  int ans = INT_MAX; //initialize the ans with higher value
  for(int i=1;i<=n;i++)
  {
    cin>>a>>b;
    suma+=a;
    if(a>b)
      ans = min(ans,b);
    if(a!=b)
      czy=true;
  }
  if(czy==false)
    cout<<0;
  else
    cout<<suma-ans; //calculate the answer based on the minimum b value
  return 0;
}
