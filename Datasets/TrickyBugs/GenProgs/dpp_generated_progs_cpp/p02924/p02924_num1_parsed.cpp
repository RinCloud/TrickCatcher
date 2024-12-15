#include<iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    long long ans = 0;
    
    for (int i = 2; i <= N; i++) {
        ans += i - 1;
    }
    
    cout << ans << endl;
    
    return 0;
}