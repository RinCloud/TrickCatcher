#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    
    int operations = 0;
    if (N % (K - 1) == 0) {
        operations = N / (K - 1);
    } else {
        operations = N / (K - 1) + 1;
    }
    
    cout << operations << endl;
    
    return 0;
}