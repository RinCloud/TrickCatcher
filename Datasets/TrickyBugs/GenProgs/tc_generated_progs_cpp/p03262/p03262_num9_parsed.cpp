#include<bits/stdc++.h>
using namespace std;
int GCD(int a,int b){
  while(a){
    swap(a,b%=a);
  }
  return b;
} 
int main(){
  int n,x,g = 0; // Initialize g to 0
  cin>>n>>x;
  vector<int> a(n);
  for(int i=0;i<n;i++){
    cin>>a[i];
    g=GCD(abs(x-a[i]),g);
  }
  // Calculate the maximum distance D by taking the difference between the maximum and minimum city coordinates
  int maxCity = *max_element(a.begin(), a.end());
  int minCity = *min_element(a.begin(), a.end());
  int maxDistance = max(abs(x - maxCity), abs(x - minCity));
  
  // If the maximum distance D is larger than the current g, update g
  if (maxDistance > g) {
    g = maxDistance;
  }
  
  cout<<g;
}
