#include<bits/stdc++.h>
using namespace std;
int main(){
    int W,a,b;
    cin>>W>>a>>b;
    int R = abs(b-(a+W));
    if(R>=0) cout<<R;
    else if(b>=a && b<=a+W) cout<<0;
    else cout<<a-(b+W);

    return 0;
}
