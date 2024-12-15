#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<int> X(N);
    vector<int> Y(N);
    
    for (int i = 0; i < N; i++) {
        cin >> X[i] >> Y[i];
    }
    
    int max_d = 0;
    
    // Calculate the maximum distance
    for (int i = 0; i < N-1; i++) {
        for (int j = i+1; j < N; j++) {
            int d = max(abs(X[i]-X[j]), abs(Y[i]-Y[j]));
            max_d = max(max_d, d);
        }
    }
    
    cout << max_d << endl;
    
    return 0;
}