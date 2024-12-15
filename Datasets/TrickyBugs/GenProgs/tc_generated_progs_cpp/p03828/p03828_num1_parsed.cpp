#include<iostream>
#include<string>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

int main(){ 
    int N;
    cin >> N;
    long long mod = 1000000007;

    long long sum[N+1] = {0}; // Initializing array to store divisor counts

    for(int i=2; i<=N; i++){
        int a = i;
        for(int j=2; j<=N; j++){
            if(a==0){
                break;
            }
            while(a%j==0){
                a/=j;
                sum[j] += 1;
            }
        }
    }

    long long b=1;
    for(int i=2; i<=N; i++){
        b = (b * (sum[i]+1)) % mod;
    }

    cout << b << endl;
    return 0;
}
