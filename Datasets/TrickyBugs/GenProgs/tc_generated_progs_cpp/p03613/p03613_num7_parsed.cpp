#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<int> a(n);
  for(int i=0; i<n; i++){
    cin >> a[i];
  }
  
  int maxValue = 0;
  for(int i=0; i<n; i++){
    int count = 0;
    for(int j=0; j<n; j++){
      if(a[j] == a[i] || a[j] == a[i]-1 || a[j] == a[i]+1){
        count++;
      }
    }
    maxValue = max(maxValue, count);
  }
  
  cout<<maxValue<<endl;
  return 0;
}