#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    
    sort(A.begin(), A.end(), greater<int>());
    
    int total = 0;
    int discount = 0;
    for (int i = 0; i < N; i++) {
        int price = A[i];
        int used = min(M, discount);
        total += price / (1 << used);
        
        if (used < M) {
            discount++;
        }
    }
    
    cout << total << endl;
    
    return 0;
}