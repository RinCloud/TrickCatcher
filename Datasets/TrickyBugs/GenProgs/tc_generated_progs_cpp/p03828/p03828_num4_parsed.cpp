#include<iostream>
#include<string>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int N,sum[2000] = {0};
    cin >> N;

    for(int i=2;i<=N;i++){
        int a = i;
        for(int j=2;j<=a;j++){
            while(a%j==0){
                a/=j;
                sum[j] += 1;
            }
        }
    }

    long long b = 1;
    for(int i=2;i<=N;i++){
        b = (b*(sum[i]+1))%1000000007;
    }
    
    cout << b << endl;
    return 0;
}