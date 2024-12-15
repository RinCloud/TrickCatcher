#include <iostream>
#include <string>
using namespace std;

int main() {
  string s,t;cin>>s>>t;
  bool exist=false;
  for(int i=s.size()-t.size();i>=0;--i){
    bool possible = true;
    for(int j=0;j<t.size();++j){
      if(s[i+j]!='?' && s[i+j]!=t[j]) {
        possible = false;
        break;
      }
    }
    if(possible){
      exist=true;
      for(int k=0;k<t.size();++k) s[i+k]=t[k];
      break;
    }
  }
  
  if(exist){
    for(int i=0;i<s.size();++i){
      if(s[i]=='?') cout<<"a";
      else cout<<s[i];
    }
    cout<<endl;
  }
  else cout<<"UNRESTORABLE"<<endl;
}