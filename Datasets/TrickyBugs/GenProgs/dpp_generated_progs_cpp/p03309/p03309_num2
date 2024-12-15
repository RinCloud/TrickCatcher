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
    
    sort(A.begin(), A.end());
    
    long long minSadness = 0;
    for (int i = 0; i < N; i++) {
        minSadness += abs(A[i] - (A[0] + i));
    }
    
    cout << minSadness << endl;
    
    return 0;
}