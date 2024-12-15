#include <iostream>
#include <vector>
using namespace std;

int main() {
    int X, K, Q;
    cin >> X >> K;
    
    vector<int> r(K);
    for (int i = 0; i < K; i++) {
        cin >> r[i];
    }
    
    cin >> Q;
    
    for (int i = 0; i < Q; i++) {
        int t, a;
        cin >> t >> a;
        
        int upper_bulb = 0;
        for (int j = 0; j < K; j++) {
            if (t >= r[j]) {
                upper_bulb ^= 1;
            }
        }
        
        if (upper_bulb == 0) {
            cout << a << endl;
        } else {
            cout << X - a << endl;
        }
    }
    
    return 0;
}