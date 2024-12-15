#include<iostream>
#include<string>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

int main(){ 
    int N;
    cin >> N;

    int sum[1005] = {0};
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
        b = (b * (sum[i]+1)) % 1000000007;
    }
    cout << b << endl;
    return 0;
}