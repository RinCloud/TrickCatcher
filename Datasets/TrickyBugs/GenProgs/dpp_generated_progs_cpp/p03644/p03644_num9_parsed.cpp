#include<iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    int ans = 1;
    while(N % 2 == 0) {
        ans = max(ans, N);
        N /= 2;
    }
    
    cout << ans << endl;
    
    return 0;
}