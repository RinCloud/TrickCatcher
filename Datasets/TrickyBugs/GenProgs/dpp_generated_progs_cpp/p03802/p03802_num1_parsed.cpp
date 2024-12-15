#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<int> x(N), y(N);
    for (int i = 0; i < N; i++) {
        cin >> x[i] >> y[i];
    }
    
    int max_distance = 0;
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            int distance = max(abs(x[i] - x[j]), abs(y[i] - y[j]));
            max_distance = max(max_distance, distance);
        }
    }
    
    cout << max_distance << endl;
    
    return 0;
}