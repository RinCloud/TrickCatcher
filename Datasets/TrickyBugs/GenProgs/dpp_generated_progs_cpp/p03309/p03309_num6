#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<int> A(N);
    for(int i = 0; i < N; i++) {
        cin >> A[i];
    }
    
    sort(A.begin(), A.end());
    
    long long minSadness = 1e18;
    
    for(int i = 0; i < N; i++) {
        long long b = A[i] - i;
        long long sadness = 0;
        
        for(int j = 0; j < N; j++) {
            sadness += abs(A[j] - (b+j));
        }
        
        minSadness = min(minSadness, sadness);
    }
    
    cout << minSadness << endl;
    
    return 0;
}