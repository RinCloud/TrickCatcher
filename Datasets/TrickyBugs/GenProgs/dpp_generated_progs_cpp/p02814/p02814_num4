#include<bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    
    vector<int> A(N);
    for(int i = 0; i < N; i++) {
        cin >> A[i];
    }
    
    int gcd = A[0];
    for(int i = 1; i < N; i++) {
        gcd = __gcd(gcd, A[i]);
    }
    
    int ans = 0;
    for(int i = 1; i * i <= M / gcd; i++) {
        if((M / gcd) % i == 0) {
            if(i % 2 == 0 && i * gcd <= M) {
                ans++;
            }
            if(((M / gcd) / i) % 2 == 0 && ((M / gcd) / i) * gcd <= M && i != ((M / gcd) / i)) {
                ans++;
            }
        }
    }
    
    cout << ans << endl;
    
    return 0;
}