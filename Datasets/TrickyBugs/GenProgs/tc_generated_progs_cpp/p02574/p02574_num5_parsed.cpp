#include<bits/stdc++.h>
using namespace std;
const int N=1e6;
int A[N+1];
int GCD(int a,int b){
    return b==0?a:GCD(b,a%b);
}
int main(){
#ifndef ONLINE_JUDGE
    freopen("in.txt","r",stdin);
#endif
    int n,tmp,gcd=0;
    cin>>n; 
    for(int i=0;i<n;++i){
        cin>>tmp;
        ++A[tmp];
        gcd=GCD(tmp,gcd);
    }
    
    //pairwise
    for(int i=2;i<=N;++i){
        int flag=0;
        for(int j=i;j<=N;j+=i){
            flag+=A[j];
            if(flag>=2) goto setwise;
        }
    }
    cout<<"pairwise coprime"<<endl;
    
    return 0;
    
    setwise:
    if(gcd==1) cout<<"setwise coprime"<<endl;
    else cout<<"not coprime"<<endl;
    
    return 0;
}
