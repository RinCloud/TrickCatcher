#include<bits/stdc++.h>
#define MOD 1000000007
using namespace std;
int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);
  int n;
  cin >> n;

  int ans = 1;
  vector<int> d(n + 1, 0);
  bool flag = true;

  for(int i = 1; i <= n; i++){
    int a;
    cin >> a;
    d[a]++;
  }

  for(int j = 1; j < n && flag; j++){
    if(d[j] != 2){
      flag = false;
    }
    ans = (ans * 2) % MOD;
  }

  if(d[0] != 1 || d[n] != 1){
    flag = false;
  }

  for(int i = 1; i <= n/2; i++){
    if(d[i] != 2){
      flag = false;
      break;
    }
  }

  if(flag){
    cout << ans << endl;
  }else{
    cout << 0 << endl;
  }
  return 0;
}
