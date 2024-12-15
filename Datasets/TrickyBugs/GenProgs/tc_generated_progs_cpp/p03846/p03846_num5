#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);
  int n;
  int ans = 1;
  int d[100001] = {};
  bool flag = true;
  
  cin >> n;

  for(int i = 0;i < n;i++){
    int a;
    cin >> a;
    d[a] ++;
  }

  for(int j = n - 1;j > 0 && flag;j -= 2){
    if(d[j] != 2){
      flag = false;
    }
    ans = (ans * 2) % 1000000007;
  }

  if(d[0] != 1 || n % 2 != 1){
    flag = false;
  }

  if(flag){
    cout << ans << endl;
  }else{
    cout << 0 << endl;
  }
  return 0;
}