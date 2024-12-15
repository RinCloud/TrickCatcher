#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int bb(vector<int> &f, int p){
  if(f[p]==p) return p;
  return f[p]=bb(f, f[p]);
}

int main(){
  int n,m;
  cin>>n>>m;
  vector<int> f(n+1);
  int i,x,y,z,t=m;
  for(i=1;i<=n;i++) f[i]=i;
  for(i=1;i<=m;i++){
    cin>>x>>y>>z;
    if(bb(f, x)==bb(f, y)) t--;
    else f[bb(f, x)] = bb(f, y);
  }
  cout<<n-t;
  return 0;
}
