#include <bits/stdc++.h>
using namespace std;

int main() {
    int N,K,x,sum=0; // Initialize sum to 0
    cin>>N>>K;
    for(int i= 0;i<N;i++){
        cin>>x;
        if(x>K/2){ // compare x with K/2 instead of K-x
            sum +=(K-x)*2;
        }else{
            sum +=x*2;
        }
    }
    cout<<sum<<endl;
}