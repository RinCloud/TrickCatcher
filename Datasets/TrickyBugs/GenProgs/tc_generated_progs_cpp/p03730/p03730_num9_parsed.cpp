#include <bits/stdc++.h>
using namespace std;
int main(){
    int A,B,C;
    cin>>A>>B>>C;
    for(int i=0;i<A;i++){
        if(A*(i+1)%B==C){cout<<"YES"<<endl;exit(0);}
    }
    cout<<"NO"<<endl;
}
