#include <iostream>
#include <vector>
using namespace std;

// Function to calculate gcd (Euclidean algorithm)
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
    
    // Calculate gcd of all numbers
    int gcdSetwise = A[0];
    for (int i = 1; i < N; i++) {
        gcdSetwise = gcd(gcdSetwise, A[i]);
    }
    
    // Check if pairwise coprime
    bool pairwiseCoprime = true;
    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            if (gcd(A[i], A[j]) != 1) {
                pairwiseCoprime = false;
                break;
            }
        }
        if (!pairwiseCoprime)
            break;
    }
    
    // Determine the result
    if (pairwiseCoprime) {
        cout << "pairwise coprime" << endl;
    } else if (gcdSetwise == 1) {
        cout << "setwise coprime" << endl;
    } else {
        cout << "not coprime" << endl;
    }
    
    return 0;
}