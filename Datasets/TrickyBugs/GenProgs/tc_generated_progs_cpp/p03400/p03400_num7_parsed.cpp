#include <iostream>
using namespace std;
int main(){
  int a,b,c,mon,ans=0; //initialize ans=0
  cin>>a>>b>>c;
  for(int i=0;i<a;i++){
    cin>>mon;
    for(int m=0;m<b;m+=mon){
      ans+=1;
    }
  }
  cout<<ans+c<<endl;
}
