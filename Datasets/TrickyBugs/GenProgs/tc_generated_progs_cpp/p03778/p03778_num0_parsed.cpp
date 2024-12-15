#include<bits/stdc++.h>
using namespace std;
int main(){
int W,a,b;
cin>>W>>a>>b;
int R=abs(b-(W+a));
if(R>=0)cout<<R;
else if(b>=a&&b<=W+a)cout<<0;
else cout<<abs(a-(b+W));

return 0;
}
