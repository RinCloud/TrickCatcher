#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<int> B(N-1);
    for (int i = 0; i < N-1; i++) {
        cin >> B[i];
    }
    
    int max_sum = 0;
    for (int i = 0; i < N-1; i++) {
        max_sum += max(B[i], B[i+1]);
    }
    
    cout << max_sum << endl;
    
    return 0;
}