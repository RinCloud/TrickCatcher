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
    
    long long total_happiness = 0;
    for (int i = 0; i < N; i++) {
        total_happiness += A[i] * abs(i - (N - i - 1));
    }
    
    cout << total_happiness << endl;
    
    return 0;
}