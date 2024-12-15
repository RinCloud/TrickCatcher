#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    unordered_map<int, int> freq;
    vector<int> A(N);
    
    for (int i = 0; i < N; i++) {
        cin >> A[i];
        freq[A[i]]++;
    }
    
    for (int k = 0; k < N; k++) {
        int cnt = freq[A[k]] - 1;
        cout << cnt << endl;
    }
    
    return 0;
}