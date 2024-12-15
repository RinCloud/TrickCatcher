#include<iostream>
using namespace std;
int main(){
    int n,l,r,m=0; // Initialize m to 0
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>l>>r;
        m += r - l + 1;
    }
    cout<<m<<endl;
    return 0;
}
