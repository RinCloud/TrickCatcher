#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<int> A(N), B(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i] >> B[i];
    }
    
    long long totalCandies = 0;
    
    for (int i = 0; i < N; i++) {
        totalCandies += min(A[i], B[i]);
    }
    
    cout << totalCandies << endl;
    
    return 0;
}