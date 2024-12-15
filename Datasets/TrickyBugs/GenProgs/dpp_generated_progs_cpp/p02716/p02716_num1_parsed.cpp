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
    
    // Sort the array in non-decreasing order
    sort(A.begin(), A.end());
    
    // Choose the maximum possible sum by selecting
    // every other element starting from the second one
    long long sum = 0;
    for (int i = 1; i < N; i += 2) {
        sum += A[i];
    }
    
    cout << sum << endl;
    
    return 0;
}