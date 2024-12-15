#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    
    long long total = 0;
    int negatives = 0;
    int minAbs = 1e9 + 1; // Initialize to a number larger than the maximum absolute value
    
    for (int i = 0; i < N; i++) {
        total += abs(A[i]); // Add the absolute value of each element to the total
        
        if (A[i] < 0) {
            negatives++; // Count the number of negative elements
        }
        
        minAbs = min(minAbs, abs(A[i])); // Find the minimum absolute value
    }
    
    if (negatives % 2 == 0) {
        cout << total << endl; // If the number of negatives is even, the maximum sum is the total sum
    } else {
        cout << total - 2 * minAbs << endl; // If the number of negatives is odd, subtract twice the minimum absolute value
    }
    
    return 0;
}