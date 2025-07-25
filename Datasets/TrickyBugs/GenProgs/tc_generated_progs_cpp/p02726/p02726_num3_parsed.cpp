#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, X, Y; 
    cin >> N >> X >> Y;
    int count[2010] = {0};
    
    for(int i = 1; i <= N-1; i++) {
        for(int j = i+1; j <= N; j++) {
            int dist = min(j-i, abs(X-i)+1+abs(Y-j));
            count[dist]++;
        }
    }
    
    for(int k = 1; k <= N-1; k++) {
        cout << count[k] << endl;
    }
    
    return 0;
}