#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;cin>>s;
  int a;
  for (int i=0;i<3;i++){
    if(s.at(i)=='o') a++;
  }
  cout<<a*100+700<<endl;
}
