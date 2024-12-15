#include <iostream>
using namespace std;

int main() {
    int a,b,c; cin>>a>>b>>c;
    if(a==b && a!=c) cout<<c;
    if(a==c && a!=b) cout<<b;
    if(b==c && b!=a) cout<<a;
}
