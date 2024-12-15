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
    
    int subarrays = 1;
    for (int i = 1; i < N; i++) {
        if (A[i] != A[i-1]) {
            subarrays++;
        }
    }
    
    cout << subarrays << endl;
    
    return 0;
}