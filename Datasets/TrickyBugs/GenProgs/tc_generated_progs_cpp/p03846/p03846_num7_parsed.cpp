#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
const int P = 1e9 + 7;
int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);
  int n;
  int a;
  int ans = 1;
  int d[100001] = {};
  bool flag = true;
  
  cin >> n;

  for(int i = 0;i < n;i++){
    cin >> a;
    d[a] ++;
  }

  for(int j = n - 1;j > 0 && flag;j -= 2){

    // FIXED: Replacing this line
    if(d[j] != 2){
      flag = false;
    }

    // FIXED: Replacing this line
    ans = (1ll * ans * d[j]) % P;
  }

  if(d[0] != 1 || n % 2 == 0){
    flag = false;
  }

  if(flag){
    cout << ans << endl;
  }else{
    cout << 0 << endl;
  }
  return 0;
}