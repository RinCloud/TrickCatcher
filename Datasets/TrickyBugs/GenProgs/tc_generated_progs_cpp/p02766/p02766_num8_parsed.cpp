#include <bits/stdc++.h>
using namespace std;
int main() {
    int x,y,a=1,i;
    cin>>x>>y;
    for(i=1;a<=x;a*=y,i++);
    cout<<i<<endl;
}