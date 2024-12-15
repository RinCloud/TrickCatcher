#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int N, D;
    cin >> N >> D;
    
    vector<int> X(N);
    vector<int> Y(N);
    
    for (int i = 0; i < N; i++) {
        cin >> X[i] >> Y[i];
    }
    
    int count = 0;
    for (int i = 0; i < N; i++) {
        int distance = sqrt(X[i] * X[i] + Y[i] * Y[i]);
        if (distance <= D) {
            count++;
        }
    }
    
    cout << count << endl;
    
    return 0;
}