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
    
    sort(H.rbegin(), H.rend());
    
    long long int sum = 0;
    for (int i = K; i < N; i++) {
        sum += H[i];
    }
    
    cout << sum << endl;
    
    return 0;
}