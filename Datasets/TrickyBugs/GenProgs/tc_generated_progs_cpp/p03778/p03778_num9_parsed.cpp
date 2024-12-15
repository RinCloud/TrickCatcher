#include<bits/stdc++.h>
using namespace std;
int main(){
    int W,a,b;
    cin>>W>>a>>b;
    int R=a+b-W;
    if(R>=0) cout<<R;
    else cout<<0;
    return 0;
}
