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
    
    vector<int> order(N);
    for (int i = 0; i < N; i++) {
        order[A[i] - 1] = i + 1;
    }
    
    for (int i = 0; i < N; i++) {
        cout << order[i] << " ";
    }
    
    return 0;
}