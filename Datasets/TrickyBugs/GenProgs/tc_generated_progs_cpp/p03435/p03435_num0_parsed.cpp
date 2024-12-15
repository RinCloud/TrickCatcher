#include <bits/stdc++.h>
using namespace std;
int main(){
  vector<int> c(9);
  for(int i=0;i<9;i++){
    cin>>c[i];
  }
  if((3*(c[4]+c[5]-2*c[3])+3*(c[8]+c[6]-2*c[7])+3*(c[0]+c[1]-2*c[2]))==0)cout<<"Yes"<<endl;
  else cout<<"No"<<endl;
}
