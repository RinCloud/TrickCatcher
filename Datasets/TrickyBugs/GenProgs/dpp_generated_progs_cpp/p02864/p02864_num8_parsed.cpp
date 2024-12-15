#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    
    vector<int> H(N);
    for (int i = 0; i < N; i++) {
        cin >> H[i];
    }
    
    vector<int> changes(K);
    for (int i = 0; i < K; i++) {
        cin >> changes[i];
    }
    
    sort(changes.rbegin(), changes.rend());
    
    long long operations = 0;
    for (int i = 0; i < N; i++) {
        operations += H[i];
    }
    
    for (int i = 0; i < K; i++) {
        operations -= changes[i];
    }
    
    cout << operations << endl;
    
    return 0;
}