#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int n, a, prev, ans = 0;
  cin >> n;
  cin >> prev;
  for(int i = 1; i < n; i++){
    cin >> a;
    if(prev > a){
      ans += prev - a;
    } else {
      prev = a;
    }
  }
  cout << ans;
  return 0;
}
