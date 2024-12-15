#include <iostream>
#include <cstring>
using namespace std;
int main(){
  int sum = 0;
  char s[100];
  cin>>s;
  for(int i=0;i<strlen(s);i++){
    for(int j=i+1;j<strlen(s);j++){
      if(s[i]==s[j]){
        sum++;
      }
    }
  }
  if(sum==0){
    cout<<"yes";
  }
  else{
    cout<<"no";
  }
  return 0;
}
