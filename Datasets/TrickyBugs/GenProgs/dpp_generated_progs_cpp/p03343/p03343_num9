#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, K, Q;
    cin >> N >> K >> Q;
    
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    
    int minDiff = INT_MAX;
    
    for (int i = 0; i < N; i++) {
        vector<int> temp = A;
        sort(temp.begin(), temp.end());
        temp.erase(temp.begin() + i);
        
        if (temp.size() >= Q) {
            int diff = temp[Q-1] - temp[0];
            minDiff = min(minDiff, diff);
        }
    }
    
    cout << minDiff << endl;
    
    return 0;
}