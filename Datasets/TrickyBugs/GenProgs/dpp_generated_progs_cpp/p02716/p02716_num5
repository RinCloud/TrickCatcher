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
    
    int evenSum = 0;
    int oddSum = 0;
    
    for (int i = 0; i < N; i++) {
        if (i % 2 == 0) {
            evenSum += A[i];
        } else {
            oddSum += A[i];
        }
    }
    
    int result = max(evenSum, oddSum);
    cout << result << endl;
    
    return 0;
}