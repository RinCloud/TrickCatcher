#include"bits/stdc++.h"
using namespace std;

int main(){
    long long n,a,b;
    cin>>n>>a>>b;
    if(b > a || (b-a)*n > a) {
        cout<<0;
        return 0;
    }
    cout<<(b-a)*(n-2)+1;
}