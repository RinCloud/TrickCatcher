#include <iostream>
#include <string>
using namespace std;

int main() {
  string s,t;cin>>s>>t;
  bool exist=false;
  for(int i=s.size()-1;i>=t.size()-1;--i){
    for(int j=0;j<t.size();++j){
      if(s[i-j]!='?' && s[i-j]!=t[t.size()-j-1]) break;
      if(j==t.size()-1){
        exist=true;
        for(int k=0;k<t.size();++k) s[i-k]=t[t.size()-k-1];
      }
    } // added a missing closing bracket
    if(exist) break;
  } // added a missing closing bracket

  if(exist){
    for(int i=0;i<s.size();++i){
      if(s[i]=='?') cout<<"a";
      else cout<<s[i];
    }
    cout<<endl;
  }
  else cout<<"UNRESTORABLE"<<endl;
}
