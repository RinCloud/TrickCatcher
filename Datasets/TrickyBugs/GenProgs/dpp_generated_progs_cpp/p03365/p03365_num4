#include<bits/stdc++.h>
using namespace std;

const int mod = 1e9+7;

int main() {
    int N;
    cin >> N;
    
    // Calculate factorial of N
    long long fact = 1;
    for(int i = 2; i <= N; i++){
        fact = (fact * i) % mod;
    }
    
    // Calculate sum of scores
    long long sum = 0;
    for(int i = 1; i < N; i++) {
        sum = (sum + (fact * i) % mod) % mod;
    }
    
    cout << sum << endl;
    
    return 0;
}