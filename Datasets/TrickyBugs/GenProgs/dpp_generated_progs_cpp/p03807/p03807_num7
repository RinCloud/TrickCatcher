#include<bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    
    int evens = 0;
    int odds = 0;
    for (int i = 0; i < N; i++) {
        if (A[i] % 2 == 0) {
            evens++;
        } else {
            odds++;
        }
    }
    
    if (evens % 2 == 0 || odds % 2 == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}