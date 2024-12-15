#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    
    int cnt = 1;
    int prevDiff = 0;
    for (int i = 1; i < N; i++) {
        int diff = A[i] - A[i-1];
        
        if (diff == 0) {
            continue;
        }
        
        if (prevDiff * diff < 0) {
            cnt++;
        }
        
        prevDiff = diff;
    }
    
    cout << cnt << endl;
    
    return 0;
}