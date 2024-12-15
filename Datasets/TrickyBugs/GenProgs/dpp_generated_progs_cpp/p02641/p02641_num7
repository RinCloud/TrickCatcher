#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
    int X, N;
    cin >> X >> N;
    
    vector<int> seq(N);
    for (int i = 0; i < N; i++) {
        cin >> seq[i];
    }
    
    int nearest = INT_MAX;
    int min_diff = INT_MAX;
    
    if (N == 0) { // If sequence is empty, return X itself
        nearest = X;
    } else {
        sort(seq.begin(), seq.end());
        
        // Check integers not in sequence and find the nearest one to X
        for (int i = 1; i <= 100; i++) {
            if (!binary_search(seq.begin(), seq.end(), i)) {
                int diff = abs(X - i);
                if (diff < min_diff) {
                    min_diff = diff;
                    nearest = i;
                }
            }
        }
    }
    
    cout << nearest << endl;
    
    return 0;
}