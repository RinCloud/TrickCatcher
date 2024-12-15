#include <iostream>
using namespace std;

int main() {
    int a,b,c; cin>>a>>b>>c;
    if(a==b && b!=c) cout<<c;
    if(a==c && b!=c) cout<<b;
    if(b==c && a!=c) cout<<a;
}