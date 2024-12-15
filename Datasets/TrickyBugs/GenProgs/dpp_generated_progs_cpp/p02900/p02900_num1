#include<iostream>
#include<cmath>
 
using namespace std;
 
long long int gcd(long long int a, long long int b){
    if(b == 0){
        return a;
    }
    return gcd(b, a % b);
}
 
int main(){
    long long int A,B;
    cin >> A >> B;

    long long int maxDivisors = 1;
    long long int gcdValue = gcd(A,B);

    for(long long int i = 2; i <= sqrt(gcdValue); ++i){
        if(gcdValue % i == 0){
            maxDivisors++;
 
            while (gcdValue % i == 0){
                gcdValue /= i;
            }
        }
    }
 
    if(gcdValue != 1){
        maxDivisors++;
    }
 
    cout << maxDivisors << endl;
 
    return 0;
}