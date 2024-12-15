#include"bits/stdc++.h"
using namespace std;
int main(){
    long long N,A,B;
    cin>>N>>A>>B;
    if(A > B) {
        cout << 0;
        return 0;
    }

    if(N == 1) {
        cout << (A == B ? 1 : 0);
        return 0;
    }

    cout<<(B-A)*(N-2)+1;

    return 0;
}
