#include<iostream>
using namespace std;
int main(){
    int n,m,ans = 1;
    cin>>n>>m;
    for (int i=1; i*i<=m; i++) {
        if(m%i==0){
            if(i<=m/n) ans = max(ans, i);
            if(m/i<=m/n) ans = max(ans, m/i);
        }
    }
    cout<<ans<<endl;
}
