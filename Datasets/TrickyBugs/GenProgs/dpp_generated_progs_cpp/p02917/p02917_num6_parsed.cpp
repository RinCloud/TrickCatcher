#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<int> B(N-1);
    for (int i = 0; i < N-1; i++) {
        cin >> B[i];
    }
    
    // Calculate the maximum possible sum of the elements of A
    int sum = B[N-2]; // Initialize sum with last element of B
    for (int i = N-3; i >= 0; i--) {
        sum += min(B[i], B[i+1]); // Add the smaller of the two adjacent elements of B to sum
    }
    
    cout << sum << endl;
    
    return 0;
}