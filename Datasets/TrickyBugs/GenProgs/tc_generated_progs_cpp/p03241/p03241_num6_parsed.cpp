#include<iostream>
using namespace std;
int main(){
    int n,m,ans = 1; // initialize ans to 1
    cin>>n>>m;
    for (int i=m/n; i>=1; i--) {
        if(m%i==0){
          if(m/i>=n){ // change condition to m/i >= n
              ans=i;
              break;
          }
        }
    }
  cout<<ans<<endl;
}
