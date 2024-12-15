#include<bits/stdc++.h>
using namespace std;

int main() {
    long long N;
    cin >> N;
    
    // Find all prime factors of N
    vector<long long> primes;
    for(long long i=2; i*i <= N; i++) {
        if(N % i == 0) {
            primes.push_back(i);
            while(N % i == 0)
                N /= i;
        }
    }
    if(N > 1)
        primes.push_back(N);
    
    int ans = 0;
    int sz = primes.size();
    vector<bool> used(sz, false);
    
    for(int i=0; i<sz; i++) {
        if(used[i]) continue;
        ans++;
        long long curr = primes[i];
        
        // Mark all multiples of current prime as used
        for(int j=i+1; j<sz; j++) {
            if(primes[j] % curr == 0) used[j] = true;
        }
    }
    
    cout << ans << endl;
    
    return 0;
}