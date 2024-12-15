#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<long long> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    
    long long minHealth = *min_element(A.begin(), A.end());
    
    cout << minHealth << endl;
    
    return 0;
}