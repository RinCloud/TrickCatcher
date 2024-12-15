#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int (i)=0; (i)<(n); (i)++)
typedef long long ll;

int main(void){
  int n, c = 0;
  cin >> n;
  vector<int> a(n);
  
  rep(i, n) cin >> a[i];
  rep(i, n) {
    if(a[i] < 0){
      a[i] *= -1;
      ++c;
    }
  }
  sort(a.begin(), a.end());
  if(c % 2 != 0)
    a[0] *= -1;
  ll sum = 0;
  
  rep(i, n)sum += a[i];
  cout << sum;
  return 0;
}