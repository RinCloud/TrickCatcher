#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int H, N;
    cin >> H >> N;
    
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    
    sort(A.begin(), A.end());
    
    int sum = 0;
    for (int i = 0; i < N; i++) {
        sum += A[i];
        if (sum >= H) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    
    cout << "No" << endl;
    
    return 0;
}