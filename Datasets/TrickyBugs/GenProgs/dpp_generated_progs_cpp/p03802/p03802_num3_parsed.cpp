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
    
    int max_dist = 0;
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            int dist = max(abs(x[i] - x[j]), abs(y[i] - y[j]));
            max_dist = max(max_dist, dist);
        }
    }
    
    cout << max_dist << endl;
    return 0;
}