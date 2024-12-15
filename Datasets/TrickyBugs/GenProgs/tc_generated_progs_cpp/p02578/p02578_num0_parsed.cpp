#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int n, ans=0;
  cin >> n;
  long long int a[n];
  for(int i=0;i<n;i++){
    cin >> a[i];
  }
  long long int max_height = 0;
  for(int i=0;i<n;i++){
    if(a[i] < max_height){
      ans += max_height - a[i];
    }else{
      max_height = a[i];
    }
  }
  cout << ans;
  return 0;
}