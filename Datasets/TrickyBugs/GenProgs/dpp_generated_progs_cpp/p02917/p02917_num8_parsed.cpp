#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Read the value of N
    int N;
    cin >> N;
    
    // Read the sequence B
    vector<int> B(N-1);
    for (int i = 0; i < N-1; i++) {
        cin >> B[i];
    }
    
    // Calculate the maximum possible sum of the elements of A
    int sum_A = B[0] + B[N-2];
    for (int i = 1; i < N-1; i++) {
        sum_A += min(B[i-1], B[i]);
    }
    
    // Print the result
    cout << sum_A << endl;
    
    return 0;
}