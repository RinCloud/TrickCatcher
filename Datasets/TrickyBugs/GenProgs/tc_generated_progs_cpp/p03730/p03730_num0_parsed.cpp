#include <bits/stdc++.h>
using namespace std;
int main(){
    int A,B,C;
    cin>>A>>B>>C;
    
    if (A % B == 0 && C == 0) {
        cout<<"YES"<<endl;
        return 0;
    }
    
    for(int i=0;i<B;i++){
        if(A*i%B==C){cout<<"YES"<<endl;return 0;}
    }
    
    cout<<"NO"<<endl;
}
