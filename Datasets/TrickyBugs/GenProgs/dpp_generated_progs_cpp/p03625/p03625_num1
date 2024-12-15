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
    
    int area = 0;
    for (int i = N - 1; i >= 0; i--) {
        int j = i - 1;
        while (j >= 0 && A[j] == A[i]) {
            j--;
        }
        
        if (j >= 0 && A[j] != A[i]) {
            int k = j - 1;
            while (k >= 0 && A[k] == A[j]) {
                k--;
            }
            
            if (k >= 0 && A[k] != A[j]) {
                area = max(area, A[j] * A[k]);
            }
        }
    }
    
    cout << area << endl;

    return 0;
}