#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int a,aa,ans=0;
  cin >> a;
  while(cin >> a){
    if(aa > a){
      ans += aa - a;
    }else{
    aa = a;
    }
  }
  cout << ans;
  return 0;
}