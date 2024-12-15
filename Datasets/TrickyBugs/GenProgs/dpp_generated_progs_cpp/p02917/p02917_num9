#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<int> B(N - 1);
    for (int i = 0; i < N - 1; i++) {
        cin >> B[i];
    }
    
    int sum = B[0]; // Initialize sum with B_1
    for (int i = 1; i < N - 1; i++) {
        sum += min(B[i - 1], B[i]); // Add the minimum of adjacent elements in B
    }
    
    sum += B[N - 2]; // Add the last element of B
    
    cout << sum << endl;
    
    return 0;
}