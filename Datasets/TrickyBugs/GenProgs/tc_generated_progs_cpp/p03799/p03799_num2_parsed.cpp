#include <bits/stdc++.h>
using namespace std;
long long  n,a,cnt;
int main () {
    cin>>a>>n;
    if(a>=n) {
        cout<<n/2<<endl;
    } else {
        long long b= (n-(a*2))/4;
        cnt=a+b;
        cout<<cnt<<endl;
    }
    return 0;
}
