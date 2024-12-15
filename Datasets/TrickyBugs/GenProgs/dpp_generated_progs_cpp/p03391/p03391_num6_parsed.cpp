#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<int> A(N), B(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i] >> B[i];
    }
    
    long long candies = 0;
    for (int i = 0; i < N; i++) {
        candies += min(A[i], B[i]);
        A[i] -= min(A[i], B[i]);
        B[i] -= min(A[i], B[i]);
    }
    
    cout << candies << endl;
    
    return 0;
}