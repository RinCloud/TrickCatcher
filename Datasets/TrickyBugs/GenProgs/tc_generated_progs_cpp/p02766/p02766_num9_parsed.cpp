#include <bits/stdc++.h>
using namespace std;
int main() {
    int x, y, a=1, i=0; // Initialized i=0
    cin>>x>>y;
    for(; a<=x; a*=y, i++); // Removed i from the loop condition
    cout<<i<<endl;
}
