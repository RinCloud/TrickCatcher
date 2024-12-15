#include<bits/stdc++.h>
using namespace std;

int main(){
  int n, a[100001] = {}, b, mx = 0;
  
  cin >> n;
  
  for(int i = 0; i < n; i++){
    cin >> b;
    
    a[b]++;
    
    if(b != 0) a[b-1]++;
    if(b != 100000) a[b + 1]++;
    
    mx = max(a[b], mx);
    mx = max(a[b+1], mx);
    mx = max(a[b-1], mx);
  }
  
  cout << mx << endl;
  
  return 0;
}
