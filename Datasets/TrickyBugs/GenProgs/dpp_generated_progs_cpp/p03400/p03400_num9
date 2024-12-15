#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, D, X;
    cin >> N >> D >> X;
    
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    
    int totalChocolates = X;
    for (int i = 0; i < N; i++) {
        int eaten = (D - 1) / A[i] + 1;
        totalChocolates += eaten;
    }
    
    cout << totalChocolates << endl;
    
    return 0;
}