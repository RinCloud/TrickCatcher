#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<int> x(N);
    vector<int> y(N);
    
    for (int i = 0; i < N; i++) {
        cin >> x[i] >> y[i];
    }
    
    int maxDistance = 0;
    
    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            int distance = max(abs(x[i] - x[j]), abs(y[i] - y[j]));
            maxDistance = max(maxDistance, distance);
        }
    }
    
    cout << maxDistance << endl;
    
    return 0;
}