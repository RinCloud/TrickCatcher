#include<iostream>
#include<vector>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<bool> isPrime(N+1, true);
    for(int i=2; i*i <= N; i++) {
        if(isPrime[i]){
            for(int j=i*i; j<=N; j+=i) {
                isPrime[j] = false;
            }
        }
    }
    
    int count = 0;
    for(int i=2; i<=N; i++) {
        if(isPrime[i]) {
            int divisors = 1;
            for(int j=2; j*j <= i; j++) {
                if(i % j == 0) {
                    divisors++;
                    if(i/j != j) {
                        divisors++;
                    }
                }
            }
            if(divisors == 8) {
                count++;
            }
        }
    }
    
    cout << count << endl;
    
    return 0;
}