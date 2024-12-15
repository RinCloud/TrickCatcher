#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int n;
  cin >> n;
  long long int a[n];
  for(int i=0; i<n; i++){
    cin >> a[i];
  }
  long long int aa = a[0];
  long long int ans=0;
  for(int i=1; i<n; i++){
    if(aa > a[i]){
      ans += aa - a[i];
    }else{
    aa = a[i];
    }
  }
  cout << ans;
  return 0;
}
