#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    
    // Sort the array in descending order
    sort(A.begin(), A.end(), greater<int>());
    
    // If the largest number is already K, it is possible
    if (A[0] == K) {
        cout << "POSSIBLE" << endl;
        return 0;
    }
    
    // If all numbers are greater than K, it is impossible
    if (A[0] > K) {
        cout << "IMPOSSIBLE" << endl;
        return 0;
    }
    
    // Calculate the greatest common divisor
    int gcd = A[0];
    for (int i = 1; i < N; i++) {
        int x = A[i];
        while (x != 0) {
            int temp = x;
            x = gcd % x;
            gcd = temp;
        }
    }
    
    // If gcd divides K, it is possible
    if (K % gcd == 0) {
        cout << "POSSIBLE" << endl;
    } else {
        cout << "IMPOSSIBLE" << endl;
    }
    
    return 0;
}