#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);
  int n;
  int a;
  long long ans = 1;
  long long d[100001] = {};    // Changed from int to long long
  bool flag = true;
  
  cin >> n;

  for(int i = 0;i < n;i++){
    cin >> a;
    d[a] ++;
  }

  for(int j = n;j > 0 && flag;j -= 2){   // Changed from n-1 to n
    if(d[j] != 2){
      flag = false;
    }
    ans = (ans * 2) % 1000000007;
  }

  if(d[0] != 1 || n % 2 == 0){   // Changed from if(d[0] == 1 && n % 2 != 0)
    flag = false;
  }

  if(flag){
    cout << ans << endl;
  }else{
    cout << 0 << endl;
  }
  return 0;
}
