#include <iostream>
#include <vector>

using namespace std;

const int MOD = 1000000007;

int main() {
    int N;
    cin >> N;
    
    // Read the absolute differences into a vector
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    
    // Initialize the counts for each difference
    vector<int> count(N, 0);
    for (int i = 0; i < N; i++) {
        count[A[i]]++;
    }
    
    // Initialize the answer with 1
    long long ans = 1;
    
    // If the first person has a difference of 0, there can only be one possible order
    if (A[0] != 0 || count[0] != 1) {
        ans = 0;
    }
    
    // Calculate the answer for each difference and multiply it to the total answer
    for (int i = 1; i < N; i++) {
        // If the difference is 0, there can only be one possible order
        if (count[i] == 0) {
            ans = 0;
            break;
        }
        
        // Calculate the number of possible orders for this difference
        long long orders = 1;
        for (int j = 0; j < count[i]; j++) {
            orders = (orders * (N - i)) % MOD;
        }
        
        // Multiply it to the total answer
        ans = (ans * orders) % MOD;
    }
    
    cout << ans << endl;
    
    return 0;
}