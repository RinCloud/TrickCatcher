#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main() {
    int N;
    cin >> N;
    
    vector<int> A(N);
    
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    
    int gcd_all = A[0];
    int pairwise_gcd = A[0];
    
    for (int i = 1; i < N; i++) {
        gcd_all = gcd(gcd_all, A[i]);
        pairwise_gcd = gcd(pairwise_gcd, A[i]);
    }
    
    if (gcd_all == 1) {
        cout << "setwise coprime" << endl;
    } else if (pairwise_gcd == 1) {
        cout << "pairwise coprime" << endl;
    } else {
        cout << "not coprime" << endl;
    }
    
    return 0;
}