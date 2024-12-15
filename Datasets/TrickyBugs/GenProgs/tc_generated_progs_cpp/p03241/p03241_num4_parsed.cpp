#include<iostream>
using namespace std;
int main(){
    int n,m,ans;
    cin>>n>>m;
    for (int i=m/n; i>=1; i--) {
        if(m%i==0){
          if(m/i>=n) {
              ans=i;
              break;
          }
        }
    }
    cout<<ans<<endl;
}