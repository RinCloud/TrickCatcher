#include <iostream>
#include <vector>

using namespace std;

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int main() {
    int n;
    cin >> n;
    
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    int pairwise_gcd = a[0];
    for (int i = 1; i < n; i++) {
        pairwise_gcd = gcd(pairwise_gcd, a[i]);
    }
    
    if (pairwise_gcd == 1) {
        cout << "pairwise coprime" << endl;
    } else {
        int setwise_gcd = a[0];
        for (int i = 1; i < n; i++) {
            setwise_gcd = gcd(setwise_gcd, a[i]);
        }
        if (setwise_gcd == 1) {
            cout << "setwise coprime" << endl;
        } else {
            cout << "not coprime" << endl;
        }
    }
    
    return 0;
}