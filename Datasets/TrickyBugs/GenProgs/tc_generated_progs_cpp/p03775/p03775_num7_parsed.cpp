#include<bits/stdc++.h>
using namespace std;
#define ll long long

// Function to calculate the number of digits in a number
int countDigits(ll num) {
    int count = 0;
    while(num != 0){
        num /= 10;
        count++;
    }
    return count;
}

int main(){
    ll n;
    cin >> n;
    
    // Find the factors of N and calculate F(A, B) for each pair
    for(int i = sqrt(n); i >= 1; i--){
        if(n % i == 0){
            ll j = n / i;
            int cn = max(countDigits(i), countDigits(j));
            cout << cn;
            return 0;
        }
    }
}
