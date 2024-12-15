#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<int> A(N);
    for(int i=0; i<N; i++){
        cin >> A[i];
    }
    
    sort(A.begin(), A.end());
    
    int minSadness = 1e9;
    
    for(int b=A[0]; b<=A[N-1]; b++){
        int sadness = 0;
        
        for(int i=0; i<N; i++){
            sadness += abs(A[i] - (b+i+1));
        }
        
        minSadness = min(minSadness, sadness);
    }
    
    cout << minSadness << endl;
    
    return 0;
}