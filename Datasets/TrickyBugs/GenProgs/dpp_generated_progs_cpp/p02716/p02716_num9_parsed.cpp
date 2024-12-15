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
    
    // Sort the sequence in non-decreasing order
    sort(A.begin(), A.end());
    
    long long sum = 0;
    
    // Choose the elements with maximum absolute values
    for (int i = N-1; i >= 0; i -= 2) {
        sum += A[i];
    }
    
    cout << sum << endl;
    
    return 0;
}