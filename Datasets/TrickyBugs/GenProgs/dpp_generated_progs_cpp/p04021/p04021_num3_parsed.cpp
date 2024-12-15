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
    
    vector<int> sorted_A = A;
    sort(sorted_A.begin(), sorted_A.end());
    
    int cnt = 0;
    for (int i = 0; i < N; i++) {
        if (A[i] != sorted_A[i]) {
            cnt++;
        }
    }
    
    cout << cnt - 1 << endl;
    
    return 0;
}