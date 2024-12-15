#include<iostream>
using namespace std;
int main(){
    long long n,x,m=0;
    cin>>n>>x;
    int a[n+2];
    a[n+1]=0;
    for(int i=1;i<=n;i++){cin>>a[i];}
    for(int i=1;i<=n;i++){
        if(a[i]+a[i+1]>x){
            m+=(a[i]+a[i+1]-x);
            if(a[i+1]<a[i]+a[i+1]-x){a[i+1]=0;}
            else a[i+1]-=(a[i]+a[i+1]-x);
        }
    }
    cout<<m<<endl;
    return 0;        
}