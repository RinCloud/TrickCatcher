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
    
    long long sum = 0;
    int negCount = 0;
    int smallestAbs = 1e9;
    
    for (int i = 0; i < N; i++) {
        sum += abs(A[i]);
        if (A[i] < 0) {
            negCount++;
        }
        smallestAbs = min(smallestAbs, abs(A[i]));
    }
    
    if (negCount % 2 == 0) {
        cout << sum << endl;
    } else {
        cout << sum - 2 * smallestAbs << endl;
    }
    
    return 0;
}