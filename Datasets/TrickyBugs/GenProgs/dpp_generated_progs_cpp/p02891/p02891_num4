#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string S;
    long long K;
    cin >> S >> K;
    
    int n = S.size();
    
    if (n == 1) {
        cout << 0 << endl;
        return 0;
    }
    
    int count = 0;
    
    if (S[0] == S[n - 1]) {
        count++;
        S[n - 1] = S[0] == 'a' ? 'b' : 'a';
    }
    
    int consecutive = 1;
    
    for (int i = 1; i < n; i++) {
        if (S[i] == S[i - 1]) {
            consecutive++;
        } else {
            count += consecutive / 2;
            consecutive = 1;
        }
    }
    
    count += consecutive / 2;
    
    long long ans = (count * K);
    
    if (S[0] == S[n - 1] && count % 2 == 1) {
        ans += (K - 1); 
    }
    
    cout << ans << endl;
    
    return 0;
}