#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

const int MOD = 1000000007;

int main() {
    int N;
    cin >> N;
    
    vector<int> A(2*N);
    for (int i = 0; i < 2*N; i++) {
        cin >> A[i];
    }
    
    // Count the number of -1's in the sequence
    int numOnes = count(A.begin(), A.end(), -1);
    
    // Initialize the result as 1
    int result = 1;
    
    // Iterate over the elements of A
    for (int i = 0; i < 2*N; i++) {
        // If the current element is -1
        if (A[i] == -1) {
            // If there are still -1's left
            if (numOnes > 0) {
                // Multiply the result by the number of remaining choices
                result = (result * numOnes) % MOD;
                // Decrement the count of -1's
                numOnes--;
            }
        }
    }
    
    // Print the result
    cout << result << endl;
    
    return 0;
}